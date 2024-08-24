"return" @keyword

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
    "*"
] @operator

(primitive_type) @type
(identifier) @function
(integer) @number
