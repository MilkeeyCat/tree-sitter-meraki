/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  ASSIGN: 1,
  COMPARISON: 2,
  EQUALITY: 3,
  SUM: 4,
  PRODUCT: 5,
  PREFIX: 6,
};

module.exports = grammar({
  name: "meraki",
  rules: {
    source_file: $ => repeat($._definition),
    _definition: $ => choice(
      $.function_definition,
      $.variable_definition,
    ),
    _type: $ => choice(
      $.primitive_type,
      $.pointer_type,
    ),
    pointer_type: $ => seq(
      optional($._type),
      "*",
    ),
    _expression: $ => choice(
      $.identifier,
      $.integer,
      $.bool,
      $.binary_expression,
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
      prec.right(PREC.ASSIGN, seq($._expression, "=", $._expression)),
    ),
    bool: $ => choice("true", "false"),
    _statement: $ => choice(
      $.return_statement,
      $.if_statement,
      $.variable_definition,
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
      $._type,
      $.identifier,
      optional(seq("=", $._expression)),
      ";",
    ),
    function_definition: $ => seq(
      $._type,
      alias($.identifier, $.function_name),
      "(",
      repeat(
        seq($._type, alias($.identifier, $.function_parameter), optional(",")),
      ),
      ")",
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

    identifier: $ => /[a-z_]+/,
    integer: $ => /\d+/,
  },
})
