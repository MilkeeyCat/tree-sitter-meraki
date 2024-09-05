/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  ASSIGN: 1,
  LOGICAL_OR: 2,
  LOGICAL_AND: 3,
  COMPARISON: 4,
  EQUALITY: 5,
  SUM: 6,
  PRODUCT: 7,
  PREFIX: 8,
};

module.exports = grammar({
  name: "meraki",
  rules: {
    source_file: $ => repeat($._definition),
    _definition: $ => choice(
      $.function_definition,
      $.variable_definition,
      $.struct_declaration,
      $.comment,
    ),
    _type: $ => choice(
      $.primitive_type,
      $.pointer_type,
      alias($.identifier, $.type_identifier),
    ),
    pointer_type: $ => seq(
      "*",
      optional($._type),
    ),
    _expression: $ => choice(
      $.identifier,
      $.integer,
      $.bool,
      $.binary_expression,
      $.string_literal,
      $.function_call,
    ),
    binary_expression: $ => choice(
      prec.left(PREC.SUM, seq($._expression, "+", $._expression)),
      prec.left(PREC.SUM, seq($._expression, "-", $._expression)),
      prec.left(PREC.PRODUCT, seq($._expression, "*", $._expression)),
      prec.left(PREC.PRODUCT, seq($._expression, "/", $._expression)),
      prec.left(PREC.COMPARISON, seq($._expression, "<", $._expression)),
      prec.left(PREC.COMPARISON, seq($._expression, ">", $._expression)),
      prec.left(PREC.COMPARISON, seq($._expression, "<=", $._expression)),
      prec.left(PREC.COMPARISON, seq($._expression, ">=", $._expression)),
      prec.left(PREC.EQUALITY, seq($._expression, "==", $._expression)),
      prec.left(PREC.EQUALITY, seq($._expression, "!=", $._expression)),
      prec.left(PREC.LOGICAL_OR, seq($._expression, "||", $._expression)),
      prec.left(PREC.LOGICAL_AND, seq($._expression, "&&", $._expression)),
      prec.right(PREC.ASSIGN, seq($._expression, "=", $._expression)),
    ),
    bool: $ => choice("true", "false"),
    _statement: $ => choice(
      $.return_statement,
      $.if_statement,
      $.variable_definition,
      $.comment,
      $.struct_declaration,
      seq($._expression, ";"),
    ),
    primitive_type: $ => choice(
      ...[8, 16, 32, 64].map(b => `u${b}`),
      ...[8, 16, 32, 64].map(b => `i${b}`),
      "usize",
      "isize",
      "bool",
      "void",
    ),
    variable_definition: $ => seq(
      "let",
      $.identifier,
      ":",
      $._type,
      optional(seq("=", $._expression)),
      ";",
    ),
    function_definition: $ => seq(
      "fn",
      alias($.identifier, $.function_name),
      "(",
      optional(
        seq(
          seq(
            alias($.identifier, $.function_parameter), ":", $._type, optional(",")
          ),
          repeat(
            seq(
              ",",
              alias($.identifier, $.function_parameter), ":", $._type, optional(",")
            ),
          ),
        ),
      ),
      optional(","),
      ")",
      "->",
      $._type,
      choice($.block, ";"),
    ),
    block: $ => seq(
      "{",
      repeat($._statement),
      "}",
    ),
    return_statement: $ => seq(
      "return",
      $._expression,
      ";",
    ),
    if_statement: $ => seq(
      "if",
      $._expression,
      $.block,
      optional(
        seq("else", $.block)
      ),
    ),
    comment: $ => seq('//', /.*/),
    struct_declaration: $ => seq(
      "struct",
      alias($.identifier, $.type_identifier),
      "{",
      repeat(
        seq(
          alias($.identifier, $.struct_field),
          ":",
          $._type,
          ";",
        ),
      ),
      "}",
    ),
    function_call: $ => seq(
      alias($.identifier, $.function_call_name),
      "(",
      repeat(
        seq(
          $._expression,
          optional(","),
        ),
      ),
      ")",
    ),

    string_literal: $ => seq(
      "\"",
      /[^"]+/,
      "\"",
    ),
    identifier: $ => /[A-z_]+/,
    integer: $ => /\d+/,
  },
})
