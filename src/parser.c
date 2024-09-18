#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 144
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 5
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  anon_sym_STAR = 1,
  anon_sym_PLUS = 2,
  anon_sym_DASH = 3,
  anon_sym_SLASH = 4,
  anon_sym_LT = 5,
  anon_sym_GT = 6,
  anon_sym_LT_EQ = 7,
  anon_sym_GT_EQ = 8,
  anon_sym_EQ_EQ = 9,
  anon_sym_BANG_EQ = 10,
  anon_sym_PIPE_PIPE = 11,
  anon_sym_AMP_AMP = 12,
  anon_sym_PIPE = 13,
  anon_sym_AMP = 14,
  anon_sym_EQ = 15,
  anon_sym_true = 16,
  anon_sym_false = 17,
  anon_sym_SEMI = 18,
  anon_sym_u8 = 19,
  anon_sym_u16 = 20,
  anon_sym_u32 = 21,
  anon_sym_u64 = 22,
  anon_sym_i8 = 23,
  anon_sym_i16 = 24,
  anon_sym_i32 = 25,
  anon_sym_i64 = 26,
  anon_sym_usize = 27,
  anon_sym_isize = 28,
  anon_sym_bool = 29,
  anon_sym_void = 30,
  anon_sym_let = 31,
  anon_sym_COLON = 32,
  anon_sym_fn = 33,
  anon_sym_LPAREN = 34,
  anon_sym_COMMA = 35,
  anon_sym_RPAREN = 36,
  anon_sym_DASH_GT = 37,
  anon_sym_LBRACK = 38,
  anon_sym_RBRACK = 39,
  anon_sym_LBRACE = 40,
  anon_sym_RBRACE = 41,
  anon_sym_return = 42,
  anon_sym_if = 43,
  anon_sym_else = 44,
  anon_sym_SLASH_SLASH = 45,
  aux_sym_comment_token1 = 46,
  anon_sym_struct = 47,
  anon_sym_DQUOTE = 48,
  aux_sym_string_literal_token1 = 49,
  sym_identifier = 50,
  sym_integer = 51,
  sym_source_file = 52,
  sym__definition = 53,
  sym__type = 54,
  sym_pointer_type = 55,
  sym__expression = 56,
  sym_binary_expression = 57,
  sym_bool = 58,
  sym__statement = 59,
  sym_primitive_type = 60,
  sym_variable_definition = 61,
  sym_function_definition = 62,
  sym_array_access = 63,
  sym_block = 64,
  sym_return_statement = 65,
  sym_if_statement = 66,
  sym_comment = 67,
  sym_struct_declaration = 68,
  sym_function_call = 69,
  sym_string_literal = 70,
  aux_sym_source_file_repeat1 = 71,
  aux_sym_function_definition_repeat1 = 72,
  aux_sym_block_repeat1 = 73,
  aux_sym_struct_declaration_repeat1 = 74,
  aux_sym_function_call_repeat1 = 75,
  alias_sym_function_call_name = 76,
  alias_sym_function_name = 77,
  alias_sym_function_parameter = 78,
  alias_sym_struct_field = 79,
  alias_sym_type_identifier = 80,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SEMI] = ";",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_i8] = "i8",
  [anon_sym_i16] = "i16",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_usize] = "usize",
  [anon_sym_isize] = "isize",
  [anon_sym_bool] = "bool",
  [anon_sym_void] = "void",
  [anon_sym_let] = "let",
  [anon_sym_COLON] = ":",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_struct] = "struct",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_identifier] = "identifier",
  [sym_integer] = "integer",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__type] = "_type",
  [sym_pointer_type] = "pointer_type",
  [sym__expression] = "_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_bool] = "bool",
  [sym__statement] = "_statement",
  [sym_primitive_type] = "primitive_type",
  [sym_variable_definition] = "variable_definition",
  [sym_function_definition] = "function_definition",
  [sym_array_access] = "array_access",
  [sym_block] = "block",
  [sym_return_statement] = "return_statement",
  [sym_if_statement] = "if_statement",
  [sym_comment] = "comment",
  [sym_struct_declaration] = "struct_declaration",
  [sym_function_call] = "function_call",
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_struct_declaration_repeat1] = "struct_declaration_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [alias_sym_function_call_name] = "function_call_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_function_parameter] = "function_parameter",
  [alias_sym_struct_field] = "struct_field",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_usize] = anon_sym_usize,
  [anon_sym_isize] = anon_sym_isize,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_identifier] = sym_identifier,
  [sym_integer] = sym_integer,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__type] = sym__type,
  [sym_pointer_type] = sym_pointer_type,
  [sym__expression] = sym__expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_bool] = sym_bool,
  [sym__statement] = sym__statement,
  [sym_primitive_type] = sym_primitive_type,
  [sym_variable_definition] = sym_variable_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_array_access] = sym_array_access,
  [sym_block] = sym_block,
  [sym_return_statement] = sym_return_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_comment] = sym_comment,
  [sym_struct_declaration] = sym_struct_declaration,
  [sym_function_call] = sym_function_call,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_struct_declaration_repeat1] = aux_sym_struct_declaration_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [alias_sym_function_call_name] = alias_sym_function_call_name,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_function_parameter] = alias_sym_function_parameter,
  [alias_sym_struct_field] = alias_sym_struct_field,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_isize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_array_access] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_function_call_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_parameter] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_struct_field] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_type_identifier,
  },
  [2] = {
    [1] = alias_sym_type_identifier,
  },
  [3] = {
    [1] = alias_sym_function_name,
  },
  [4] = {
    [0] = alias_sym_struct_field,
  },
  [5] = {
    [0] = alias_sym_function_call_name,
  },
  [6] = {
    [1] = alias_sym_function_parameter,
  },
  [7] = {
    [1] = alias_sym_function_name,
    [3] = alias_sym_function_parameter,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 18,
  [21] = 17,
  [22] = 22,
  [23] = 18,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 27,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 38,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 47,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 48,
  [64] = 64,
  [65] = 65,
  [66] = 50,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 48,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 73,
  [84] = 60,
  [85] = 72,
  [86] = 86,
  [87] = 65,
  [88] = 88,
  [89] = 62,
  [90] = 90,
  [91] = 47,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 94,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 101,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 112,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 120,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 138,
  [140] = 140,
  [141] = 123,
  [142] = 119,
  [143] = 128,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      ADVANCE_MAP(
        '!', 15,
        '"', 116,
        '&', 69,
        '(', 97,
        ')', 99,
        '*', 54,
        '+', 55,
        ',', 98,
        '-', 57,
        '/', 59,
        ':', 95,
        ';', 76,
        '<', 60,
        '=', 71,
        '>', 61,
        '[', 101,
        ']', 102,
        'b', 37,
        'e', 30,
        'f', 17,
        'i', 7,
        'l', 25,
        'r', 26,
        's', 46,
        't', 38,
        'u', 8,
        'v', 36,
        '{', 103,
        '|', 68,
        '}', 104,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 15,
        '"', 116,
        '&', 69,
        '(', 97,
        ')', 99,
        '*', 54,
        '+', 55,
        ',', 98,
        '-', 56,
        '/', 58,
        ';', 76,
        '<', 60,
        '=', 71,
        '>', 61,
        '[', 101,
        ']', 102,
        'f', 121,
        't', 142,
        '{', 103,
        '|', 68,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 116,
        '/', 6,
        'e', 137,
        'f', 121,
        'i', 131,
        'l', 129,
        'r', 130,
        's', 150,
        't', 142,
        '}', 104,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 116,
        '/', 6,
        'f', 121,
        'i', 131,
        'l', 129,
        'r', 130,
        's', 150,
        't', 142,
        '}', 104,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        ')', 99,
        '*', 54,
        ',', 98,
        ';', 76,
        '=', 70,
        'b', 141,
        'i', 119,
        'u', 120,
        'v', 140,
        '{', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(99);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '}') ADVANCE(104);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(111);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '6') ADVANCE(11);
      if (lookahead == '8') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(12);
      if (lookahead == '8') ADVANCE(77);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(83);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(79);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(84);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(80);
      END_STATE();
    case 13:
      if (lookahead == '6') ADVANCE(82);
      END_STATE();
    case 14:
      if (lookahead == '6') ADVANCE(78);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(100);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 'z') ADVANCE(23);
      END_STATE();
    case 51:
      if (lookahead == 'z') ADVANCE(24);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 's') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(100);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(111);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(66);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(67);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_void);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_return);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_if);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_else);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(13);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '6') ADVANCE(11);
      if (lookahead == '8') ADVANCE(81);
      if (lookahead == 's') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(12);
      if (lookahead == '8') ADVANCE(77);
      if (lookahead == 's') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(156);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 52},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 52},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 52},
  [77] = {.lex_state = 52},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 52},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 52},
  [83] = {.lex_state = 52},
  [84] = {.lex_state = 52},
  [85] = {.lex_state = 52},
  [86] = {.lex_state = 52},
  [87] = {.lex_state = 52},
  [88] = {.lex_state = 52},
  [89] = {.lex_state = 52},
  [90] = {.lex_state = 52},
  [91] = {.lex_state = 52},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 117},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 112},
  [121] = {.lex_state = 52},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 52},
  [126] = {.lex_state = 52},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 112},
  [130] = {.lex_state = 52},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 52},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 52},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_usize] = ACTIONS(1),
    [anon_sym_isize] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(122),
    [sym__definition] = STATE(58),
    [sym_variable_definition] = STATE(58),
    [sym_function_definition] = STATE(58),
    [sym_comment] = STATE(58),
    [sym_struct_declaration] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_fn] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(13), 17,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [36] = 10,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_AMP,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(29), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(39), 4,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(31), 8,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [82] = 4,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(39), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(31), 13,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [116] = 9,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_AMP,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(29), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(39), 4,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(31), 9,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [160] = 8,
    ACTIONS(37), 1,
      anon_sym_AMP,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(29), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(39), 5,
      anon_sym_PIPE,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(31), 9,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [202] = 2,
    ACTIONS(43), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(41), 17,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [232] = 7,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(29), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(39), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(31), 9,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [272] = 2,
    ACTIONS(47), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(45), 17,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [302] = 2,
    ACTIONS(51), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(49), 17,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [332] = 2,
    ACTIONS(55), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(53), 17,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [362] = 2,
    ACTIONS(39), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(31), 17,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [392] = 12,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 1,
      anon_sym_EQ,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(29), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(39), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(31), 7,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [442] = 2,
    ACTIONS(63), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(61), 17,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [472] = 5,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(29), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(39), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(31), 11,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [508] = 3,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(39), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(31), 15,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [540] = 12,
    ACTIONS(67), 1,
      anon_sym_let,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      anon_sym_return,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 1,
      anon_sym_struct,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(83), 1,
      sym_integer,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
    STATE(22), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
  [589] = 12,
    ACTIONS(67), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_return,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 1,
      anon_sym_struct,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(83), 1,
      sym_integer,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
    STATE(21), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
  [638] = 12,
    ACTIONS(67), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_return,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 1,
      anon_sym_struct,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(83), 1,
      sym_integer,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
    STATE(22), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
  [687] = 12,
    ACTIONS(67), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_return,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 1,
      anon_sym_struct,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(83), 1,
      sym_integer,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
    STATE(19), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
  [736] = 12,
    ACTIONS(67), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_return,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 1,
      anon_sym_struct,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(83), 1,
      sym_integer,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
    STATE(22), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
  [785] = 12,
    ACTIONS(96), 1,
      anon_sym_let,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_return,
    ACTIONS(104), 1,
      anon_sym_if,
    ACTIONS(107), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(110), 1,
      anon_sym_struct,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(93), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
    STATE(22), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
  [834] = 12,
    ACTIONS(67), 1,
      anon_sym_let,
    ACTIONS(71), 1,
      anon_sym_return,
    ACTIONS(73), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(77), 1,
      anon_sym_struct,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(83), 1,
      sym_integer,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
    STATE(17), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
  [883] = 6,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(78), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(130), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(126), 5,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
    ACTIONS(128), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [918] = 13,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 1,
      anon_sym_EQ,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(29), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(134), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(138), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_integer,
  [967] = 5,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(96), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(130), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(128), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [995] = 5,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(113), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(130), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(128), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [1023] = 5,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(107), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(130), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(128), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [1051] = 5,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(102), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(130), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(128), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [1079] = 5,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(112), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(130), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(128), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [1107] = 5,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(103), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(130), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(128), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [1135] = 5,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(104), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(130), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(128), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [1163] = 5,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(127), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(130), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(128), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [1191] = 5,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(109), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(130), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(128), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [1219] = 5,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(100), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(130), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(128), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [1247] = 12,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 1,
      anon_sym_EQ,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_block,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(29), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1289] = 5,
    ACTIONS(124), 1,
      anon_sym_STAR,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(97), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(130), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(128), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [1317] = 11,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 1,
      anon_sym_EQ,
    ACTIONS(142), 1,
      anon_sym_SEMI,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(29), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1356] = 11,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_SEMI,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(29), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1395] = 11,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 1,
      anon_sym_EQ,
    ACTIONS(146), 1,
      anon_sym_SEMI,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(29), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1434] = 11,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 1,
      anon_sym_EQ,
    ACTIONS(148), 1,
      anon_sym_SEMI,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(29), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1473] = 11,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_AMP,
    ACTIONS(57), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 1,
      anon_sym_EQ,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(23), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(29), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1512] = 7,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    ACTIONS(154), 1,
      sym_integer,
    STATE(44), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [1540] = 7,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(167), 1,
      sym_integer,
    STATE(44), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(156), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [1568] = 7,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(154), 1,
      sym_integer,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [1596] = 3,
    ACTIONS(176), 1,
      anon_sym_else,
    ACTIONS(174), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(172), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_struct,
      sym_identifier,
  [1615] = 2,
    ACTIONS(180), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(178), 8,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_struct,
      sym_identifier,
  [1632] = 2,
    ACTIONS(184), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(182), 8,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_struct,
      sym_identifier,
  [1649] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(186), 1,
      sym_integer,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [1671] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(188), 1,
      sym_integer,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [1693] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(190), 1,
      sym_integer,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(5), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [1715] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym_integer,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [1737] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(194), 1,
      sym_integer,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [1759] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(196), 1,
      sym_integer,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [1781] = 2,
    ACTIONS(200), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(198), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_struct,
      sym_identifier,
  [1797] = 2,
    ACTIONS(204), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(202), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_struct,
      sym_identifier,
  [1813] = 2,
    ACTIONS(180), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(178), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_struct,
      sym_identifier,
  [1829] = 6,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      anon_sym_fn,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    STATE(64), 6,
      sym__definition,
      sym_variable_definition,
      sym_function_definition,
      sym_comment,
      sym_struct_declaration,
      aux_sym_source_file_repeat1,
  [1853] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(208), 1,
      sym_integer,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [1875] = 2,
    ACTIONS(212), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(210), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_struct,
      sym_identifier,
  [1891] = 2,
    ACTIONS(216), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(214), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_struct,
      sym_identifier,
  [1907] = 2,
    ACTIONS(220), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(218), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_struct,
      sym_identifier,
  [1923] = 2,
    ACTIONS(184), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(182), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_struct,
      sym_identifier,
  [1939] = 6,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      anon_sym_let,
    ACTIONS(227), 1,
      anon_sym_fn,
    ACTIONS(230), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(233), 1,
      anon_sym_struct,
    STATE(64), 6,
      sym__definition,
      sym_variable_definition,
      sym_function_definition,
      sym_comment,
      sym_struct_declaration,
      aux_sym_source_file_repeat1,
  [1963] = 2,
    ACTIONS(238), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(236), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_struct,
      sym_identifier,
  [1979] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(240), 1,
      sym_integer,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [2001] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(242), 1,
      sym_integer,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(4), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [2023] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(244), 1,
      sym_integer,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [2045] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(246), 1,
      sym_integer,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(42), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [2067] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(248), 1,
      sym_integer,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [2089] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(250), 1,
      sym_integer,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [2111] = 2,
    ACTIONS(254), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(252), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_struct,
      sym_identifier,
  [2127] = 2,
    ACTIONS(258), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(256), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_struct,
      sym_identifier,
  [2143] = 5,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(260), 1,
      sym_integer,
    ACTIONS(65), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(40), 6,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_array_access,
      sym_function_call,
      sym_string_literal,
  [2165] = 2,
    ACTIONS(159), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(262), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2176] = 1,
    ACTIONS(264), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [2184] = 1,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [2192] = 1,
    ACTIONS(266), 5,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [2200] = 1,
    ACTIONS(268), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [2208] = 1,
    ACTIONS(270), 5,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [2216] = 1,
    ACTIONS(272), 5,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [2224] = 1,
    ACTIONS(274), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [2232] = 1,
    ACTIONS(258), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [2240] = 1,
    ACTIONS(212), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [2248] = 1,
    ACTIONS(254), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [2256] = 1,
    ACTIONS(276), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [2264] = 1,
    ACTIONS(238), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [2272] = 1,
    ACTIONS(278), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [2280] = 1,
    ACTIONS(220), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [2288] = 1,
    ACTIONS(280), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [2296] = 1,
    ACTIONS(180), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [2304] = 4,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    ACTIONS(286), 1,
      sym_identifier,
    STATE(108), 1,
      aux_sym_function_definition_repeat1,
  [2317] = 3,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_function_definition_repeat1,
  [2327] = 3,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    ACTIONS(290), 1,
      sym_identifier,
    STATE(101), 1,
      aux_sym_struct_declaration_repeat1,
  [2337] = 3,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    ACTIONS(294), 1,
      sym_identifier,
    STATE(95), 1,
      aux_sym_struct_declaration_repeat1,
  [2347] = 3,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_block,
  [2357] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym_block,
  [2367] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(307), 1,
      sym_identifier,
  [2377] = 3,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      aux_sym_struct_declaration_repeat1,
  [2387] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(311), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      sym_block,
  [2397] = 3,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_struct_declaration_repeat1,
  [2407] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(315), 1,
      anon_sym_SEMI,
    STATE(82), 1,
      sym_block,
  [2417] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(317), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      sym_block,
  [2427] = 3,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_function_definition_repeat1,
  [2437] = 3,
    ACTIONS(290), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      aux_sym_struct_declaration_repeat1,
  [2447] = 3,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_function_definition_repeat1,
  [2457] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(330), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      sym_block,
  [2467] = 3,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_function_definition_repeat1,
  [2477] = 2,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
  [2484] = 1,
    ACTIONS(341), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2489] = 2,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
  [2496] = 2,
    ACTIONS(345), 1,
      anon_sym_EQ,
    ACTIONS(347), 1,
      anon_sym_SEMI,
  [2503] = 2,
    ACTIONS(349), 1,
      anon_sym_EQ,
    ACTIONS(351), 1,
      anon_sym_SEMI,
  [2510] = 1,
    ACTIONS(353), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2515] = 2,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
  [2522] = 2,
    ACTIONS(286), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
  [2529] = 1,
    ACTIONS(357), 1,
      anon_sym_DQUOTE,
  [2533] = 1,
    ACTIONS(359), 1,
      aux_sym_string_literal_token1,
  [2537] = 1,
    ACTIONS(361), 1,
      anon_sym_COLON,
  [2541] = 1,
    ACTIONS(363), 1,
      aux_sym_comment_token1,
  [2545] = 1,
    ACTIONS(365), 1,
      anon_sym_DASH_GT,
  [2549] = 1,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
  [2553] = 1,
    ACTIONS(369), 1,
      sym_identifier,
  [2557] = 1,
    ACTIONS(371), 1,
      sym_identifier,
  [2561] = 1,
    ACTIONS(373), 1,
      anon_sym_DASH_GT,
  [2565] = 1,
    ACTIONS(375), 1,
      anon_sym_DASH_GT,
  [2569] = 1,
    ACTIONS(377), 1,
      anon_sym_SEMI,
  [2573] = 1,
    ACTIONS(379), 1,
      sym_identifier,
  [2577] = 1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
  [2581] = 1,
    ACTIONS(383), 1,
      anon_sym_DASH_GT,
  [2585] = 1,
    ACTIONS(385), 1,
      anon_sym_COLON,
  [2589] = 1,
    ACTIONS(387), 1,
      anon_sym_DASH_GT,
  [2593] = 1,
    ACTIONS(389), 1,
      anon_sym_COLON,
  [2597] = 1,
    ACTIONS(391), 1,
      anon_sym_COLON,
  [2601] = 1,
    ACTIONS(393), 1,
      anon_sym_DASH_GT,
  [2605] = 1,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
  [2609] = 1,
    ACTIONS(286), 1,
      sym_identifier,
  [2613] = 1,
    ACTIONS(397), 1,
      anon_sym_LBRACE,
  [2617] = 1,
    ACTIONS(399), 1,
      anon_sym_LBRACE,
  [2621] = 1,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
  [2625] = 1,
    ACTIONS(403), 1,
      sym_identifier,
  [2629] = 1,
    ACTIONS(405), 1,
      anon_sym_COLON,
  [2633] = 1,
    ACTIONS(407), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 160,
  [SMALL_STATE(7)] = 202,
  [SMALL_STATE(8)] = 232,
  [SMALL_STATE(9)] = 272,
  [SMALL_STATE(10)] = 302,
  [SMALL_STATE(11)] = 332,
  [SMALL_STATE(12)] = 362,
  [SMALL_STATE(13)] = 392,
  [SMALL_STATE(14)] = 442,
  [SMALL_STATE(15)] = 472,
  [SMALL_STATE(16)] = 508,
  [SMALL_STATE(17)] = 540,
  [SMALL_STATE(18)] = 589,
  [SMALL_STATE(19)] = 638,
  [SMALL_STATE(20)] = 687,
  [SMALL_STATE(21)] = 736,
  [SMALL_STATE(22)] = 785,
  [SMALL_STATE(23)] = 834,
  [SMALL_STATE(24)] = 883,
  [SMALL_STATE(25)] = 918,
  [SMALL_STATE(26)] = 967,
  [SMALL_STATE(27)] = 995,
  [SMALL_STATE(28)] = 1023,
  [SMALL_STATE(29)] = 1051,
  [SMALL_STATE(30)] = 1079,
  [SMALL_STATE(31)] = 1107,
  [SMALL_STATE(32)] = 1135,
  [SMALL_STATE(33)] = 1163,
  [SMALL_STATE(34)] = 1191,
  [SMALL_STATE(35)] = 1219,
  [SMALL_STATE(36)] = 1247,
  [SMALL_STATE(37)] = 1289,
  [SMALL_STATE(38)] = 1317,
  [SMALL_STATE(39)] = 1356,
  [SMALL_STATE(40)] = 1395,
  [SMALL_STATE(41)] = 1434,
  [SMALL_STATE(42)] = 1473,
  [SMALL_STATE(43)] = 1512,
  [SMALL_STATE(44)] = 1540,
  [SMALL_STATE(45)] = 1568,
  [SMALL_STATE(46)] = 1596,
  [SMALL_STATE(47)] = 1615,
  [SMALL_STATE(48)] = 1632,
  [SMALL_STATE(49)] = 1649,
  [SMALL_STATE(50)] = 1671,
  [SMALL_STATE(51)] = 1693,
  [SMALL_STATE(52)] = 1715,
  [SMALL_STATE(53)] = 1737,
  [SMALL_STATE(54)] = 1759,
  [SMALL_STATE(55)] = 1781,
  [SMALL_STATE(56)] = 1797,
  [SMALL_STATE(57)] = 1813,
  [SMALL_STATE(58)] = 1829,
  [SMALL_STATE(59)] = 1853,
  [SMALL_STATE(60)] = 1875,
  [SMALL_STATE(61)] = 1891,
  [SMALL_STATE(62)] = 1907,
  [SMALL_STATE(63)] = 1923,
  [SMALL_STATE(64)] = 1939,
  [SMALL_STATE(65)] = 1963,
  [SMALL_STATE(66)] = 1979,
  [SMALL_STATE(67)] = 2001,
  [SMALL_STATE(68)] = 2023,
  [SMALL_STATE(69)] = 2045,
  [SMALL_STATE(70)] = 2067,
  [SMALL_STATE(71)] = 2089,
  [SMALL_STATE(72)] = 2111,
  [SMALL_STATE(73)] = 2127,
  [SMALL_STATE(74)] = 2143,
  [SMALL_STATE(75)] = 2165,
  [SMALL_STATE(76)] = 2176,
  [SMALL_STATE(77)] = 2184,
  [SMALL_STATE(78)] = 2192,
  [SMALL_STATE(79)] = 2200,
  [SMALL_STATE(80)] = 2208,
  [SMALL_STATE(81)] = 2216,
  [SMALL_STATE(82)] = 2224,
  [SMALL_STATE(83)] = 2232,
  [SMALL_STATE(84)] = 2240,
  [SMALL_STATE(85)] = 2248,
  [SMALL_STATE(86)] = 2256,
  [SMALL_STATE(87)] = 2264,
  [SMALL_STATE(88)] = 2272,
  [SMALL_STATE(89)] = 2280,
  [SMALL_STATE(90)] = 2288,
  [SMALL_STATE(91)] = 2296,
  [SMALL_STATE(92)] = 2304,
  [SMALL_STATE(93)] = 2317,
  [SMALL_STATE(94)] = 2327,
  [SMALL_STATE(95)] = 2337,
  [SMALL_STATE(96)] = 2347,
  [SMALL_STATE(97)] = 2357,
  [SMALL_STATE(98)] = 2367,
  [SMALL_STATE(99)] = 2377,
  [SMALL_STATE(100)] = 2387,
  [SMALL_STATE(101)] = 2397,
  [SMALL_STATE(102)] = 2407,
  [SMALL_STATE(103)] = 2417,
  [SMALL_STATE(104)] = 2427,
  [SMALL_STATE(105)] = 2437,
  [SMALL_STATE(106)] = 2447,
  [SMALL_STATE(107)] = 2457,
  [SMALL_STATE(108)] = 2467,
  [SMALL_STATE(109)] = 2477,
  [SMALL_STATE(110)] = 2484,
  [SMALL_STATE(111)] = 2489,
  [SMALL_STATE(112)] = 2496,
  [SMALL_STATE(113)] = 2503,
  [SMALL_STATE(114)] = 2510,
  [SMALL_STATE(115)] = 2515,
  [SMALL_STATE(116)] = 2522,
  [SMALL_STATE(117)] = 2529,
  [SMALL_STATE(118)] = 2533,
  [SMALL_STATE(119)] = 2537,
  [SMALL_STATE(120)] = 2541,
  [SMALL_STATE(121)] = 2545,
  [SMALL_STATE(122)] = 2549,
  [SMALL_STATE(123)] = 2553,
  [SMALL_STATE(124)] = 2557,
  [SMALL_STATE(125)] = 2561,
  [SMALL_STATE(126)] = 2565,
  [SMALL_STATE(127)] = 2569,
  [SMALL_STATE(128)] = 2573,
  [SMALL_STATE(129)] = 2577,
  [SMALL_STATE(130)] = 2581,
  [SMALL_STATE(131)] = 2585,
  [SMALL_STATE(132)] = 2589,
  [SMALL_STATE(133)] = 2593,
  [SMALL_STATE(134)] = 2597,
  [SMALL_STATE(135)] = 2601,
  [SMALL_STATE(136)] = 2605,
  [SMALL_STATE(137)] = 2609,
  [SMALL_STATE(138)] = 2613,
  [SMALL_STATE(139)] = 2617,
  [SMALL_STATE(140)] = 2621,
  [SMALL_STATE(141)] = 2625,
  [SMALL_STATE(142)] = 2629,
  [SMALL_STATE(143)] = 2633,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_access, 4, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_access, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 5),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 5),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 5),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 7, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 7, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_declaration, 5, 0, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 5, 0, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_declaration, 4, 0, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 4, 0, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 13, 0, 7),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, 0, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 12, 0, 7),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, 0, 7),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, 0, 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 0),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 4, 0, 6), SHIFT_REPEAT(114),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 4, 0, 6),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 4, 0, 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 5, 0, 6),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [367] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_meraki(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
