## How can little Timmy set this up for himself?

Step 1. Clone the repo
Step 2. Add this code in your tree sitter config(if you don't use neovim, too
bad git gut):
```lua
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()

-- Add language's file extension
vim.filetype.add({
    extension = {
        mk = "mk"
    }
})
parser_config.meraki = {
    install_info = {
        url = "https://github.com/MilkeeyCat/tree-sitter-meraki",
        files = { "src/parser.c" },
        branch = "master",
        -- Dunno what those mean but I have em
        generate_requires_npm = false,
        requires_generate_from_grammar = false,
    },
    filetype = "mk",
}
```
Step 3. At this point nothing works and to add code highlighting, you need to
make a `queries` directory in your neovim runtime dir (for me it's
`~/.config/nvim`) and do one of these:
- copy content of the file `queries/highlights.scm` from this repository into
created `queries` directory or
- make a symbol link to that file, if you cloned the repository
