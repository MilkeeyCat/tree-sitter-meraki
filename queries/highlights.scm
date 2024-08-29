[
    "struct"
    "if"
    "else"
    "return"
] @keyword

[
    "true"
    "false"
] @boolean

[
    ";"
] @punctuation.delimiter

[
    "("
    ")"
    "{"
    "}"
] @punctuation.bracket

[
    "+"
    "-"
    "*"
    "/"
    "<"
    ">"
    "<="
    ">="
    "=="
    "!="
    "="
    "&&"
    "||"
] @operator

(primitive_type) @type
(identifier) @variable
(struct_field) @variable.member

(function_parameter) @variable.parameter
(function_name) @function

(integer) @number
(string_literal) @string

(comment) @comment @spell
