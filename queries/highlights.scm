[
    "fn"
    "let"
    "struct"
    "if"
    "else"
    "while"
    "for"
    "return"
] @keyword

[
    "true"
    "false"
] @boolean

[
    ";"
    ":"
    ","
] @punctuation.delimiter

[
    "("
    ")"
    "{"
    "}"
    "["
    "]"
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
    "|"
    "&"
    "||"
    "->"
    "!"
    "~"
] @operator

(type_identifier) @type
(primitive_type) @type.builtin
(identifier) @variable
(struct_field) @variable.member

(function_parameter) @variable.parameter
(function_name) @function
(function_call_name) @function.call

(integer) @number
(string_literal) @string

(comment) @comment @spell

"NULL" @variable.builtin
