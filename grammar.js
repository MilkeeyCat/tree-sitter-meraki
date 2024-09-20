/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  ASSIGN: 1,
  LOGICAL_OR: 2,
  LOGICAL_AND: 3,
  BITWISE_OR: 4,
  BITWISE_AND: 5,
  COMPARISON: 6,
  EQUALITY: 7,
  SUM: 8,
  PRODUCT: 9,
  PREFIX: 10,
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
      prec.left($.identifier),
      $.integer,
      $.bool,
      $.unary_expressions,
      $.binary_expression,
      $.string_literal,
      $.function_call,
      $.array_access,
      $.struct_expression,
      "NULL",
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
      prec.left(PREC.BITWISE_OR, seq($._expression, "|", $._expression)),
      prec.left(PREC.BITWISE_AND, seq($._expression, "&", $._expression)),
      prec.right(PREC.ASSIGN, seq($._expression, "=", $._expression)),
    ),
    unary_expressions: $ => choice(
      prec.left(PREC.PREFIX, seq("!", $._expression)),
      prec.left(PREC.PREFIX, seq("-", $._expression)),
      prec.left(PREC.PREFIX, seq("*", $._expression)),
      prec.left(PREC.PREFIX, seq("&", $._expression)),
      prec.left(PREC.PREFIX, seq("~", $._expression)),
    ),
    bool: $ => choice("true", "false"),
    _statement: $ => choice(
      $.return_statement,
      $.if_statement,
      $.while_statement,
      $.for_statement,
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
    array_access: $ => seq(
      $.identifier,
      "[",
      $._expression,
      "]",
    ),
    struct_expression: $ => seq(
      alias($.identifier, $.type_identifier),
      "{",
      optional(
        seq(
          seq(
            alias($.identifier, $.struct_field),
            ":",
            $._expression
          ),
          repeat(
            seq(
              ",",
              alias($.identifier, $.struct_field),
              ":",
              $._expression,
            ),
          ),
        ),
      ),
      optional(","),
      "}",
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
    while_statement: $ => seq(
      "while",
      $._expression,
      $.block,
    ),
    for_statement: $ => seq(
      "for",
      optional(choice(
        $.variable_definition,
        $._expression,
      )),
      ";",
      optional($._expression),
      ";",
      optional($._expression),
      $.block,
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
      /[^"]*/,
      "\"",
    ),
    identifier: $ => /[A-Za-z_]+/,
    integer: $ => /\d+/,
  },
})
