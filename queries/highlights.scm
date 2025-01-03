"mod" @keyword.import

[
    "fn"
    "let"
    "struct"
    "if"
    "else"
    "while"
    "for"
    "return"
    "as"
    "continue"
    "break"
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
    "."
    "->"
    "!"
    "~"
] @operator

(type_identifier) @type
(primitive_type) @type.builtin
(identifier) @variable
((identifier) @variable.builtin
    (#eq? @variable.builtin "this")
    (#has-ancestor? @variable.builtin method_definition))
(struct_field) @variable.member

(function_parameter) @variable.parameter
(function_name) @function
(function_call
    (identifier) @function.call
)

(integer) @number
(string_literal) @string

(comment) @comment @spell

"NULL" @variable.builtin
