/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

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
      "*"
    ),
    _expression: $ => choice(
      $.identifier,
      $.integer_literal,
    ),
    _statement: $ => choice(
      $.return_statement,
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
      ";",
    ),
    function_definition: $ => seq(
      $._type,
      $.identifier,
      "(",
      ")",
      $.block,
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

    identifier: $ => /[a-z_]+/,
    integer_literal: $ => /\d+/,
  },
})
