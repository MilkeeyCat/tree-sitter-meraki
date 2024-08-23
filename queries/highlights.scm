"return" @keyword

";" @punctuation.delimiter

[
    "("
    ")"
    "{"
    "}"
] @punctuation.bracket


(primitive_type) @type
(identifier) @function
(integer_literal) @number
