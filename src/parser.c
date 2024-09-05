#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 137
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 5
#define TOKEN_COUNT 48
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
  anon_sym_EQ = 13,
  anon_sym_true = 14,
  anon_sym_false = 15,
  anon_sym_SEMI = 16,
  anon_sym_u8 = 17,
  anon_sym_u16 = 18,
  anon_sym_u32 = 19,
  anon_sym_u64 = 20,
  anon_sym_i8 = 21,
  anon_sym_i16 = 22,
  anon_sym_i32 = 23,
  anon_sym_i64 = 24,
  anon_sym_usize = 25,
  anon_sym_isize = 26,
  anon_sym_bool = 27,
  anon_sym_void = 28,
  anon_sym_let = 29,
  anon_sym_COLON = 30,
  anon_sym_fn = 31,
  anon_sym_LPAREN = 32,
  anon_sym_COMMA = 33,
  anon_sym_RPAREN = 34,
  anon_sym_DASH_GT = 35,
  anon_sym_LBRACE = 36,
  anon_sym_RBRACE = 37,
  anon_sym_return = 38,
  anon_sym_if = 39,
  anon_sym_else = 40,
  anon_sym_SLASH_SLASH = 41,
  aux_sym_comment_token1 = 42,
  anon_sym_struct = 43,
  anon_sym_DQUOTE = 44,
  aux_sym_string_literal_token1 = 45,
  sym_identifier = 46,
  sym_integer = 47,
  sym_source_file = 48,
  sym__definition = 49,
  sym__type = 50,
  sym_pointer_type = 51,
  sym__expression = 52,
  sym_binary_expression = 53,
  sym_bool = 54,
  sym__statement = 55,
  sym_primitive_type = 56,
  sym_variable_definition = 57,
  sym_function_definition = 58,
  sym_block = 59,
  sym_return_statement = 60,
  sym_if_statement = 61,
  sym_comment = 62,
  sym_struct_declaration = 63,
  sym_function_call = 64,
  sym_string_literal = 65,
  aux_sym_source_file_repeat1 = 66,
  aux_sym_function_definition_repeat1 = 67,
  aux_sym_block_repeat1 = 68,
  aux_sym_struct_declaration_repeat1 = 69,
  aux_sym_function_call_repeat1 = 70,
  alias_sym_function_call_name = 71,
  alias_sym_function_name = 72,
  alias_sym_function_parameter = 73,
  alias_sym_struct_field = 74,
  alias_sym_type_identifier = 75,
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
  [5] = 2,
  [6] = 6,
  [7] = 2,
  [8] = 6,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 23,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 39,
  [49] = 41,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 61,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 51,
  [70] = 54,
  [71] = 71,
  [72] = 41,
  [73] = 55,
  [74] = 74,
  [75] = 75,
  [76] = 52,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 39,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 45,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 91,
  [98] = 98,
  [99] = 98,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 108,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
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
  [129] = 129,
  [130] = 130,
  [131] = 121,
  [132] = 122,
  [133] = 133,
  [134] = 130,
  [135] = 128,
  [136] = 119,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(56);
      ADVANCE_MAP(
        '!', 16,
        '"', 115,
        '&', 4,
        '(', 98,
        ')', 100,
        '*', 57,
        '+', 58,
        ',', 99,
        '-', 60,
        '/', 62,
        ':', 96,
        ';', 77,
        '<', 63,
        '=', 72,
        '>', 64,
        'b', 38,
        'e', 31,
        'f', 18,
        'i', 8,
        'l', 26,
        'r', 27,
        's', 47,
        't', 39,
        'u', 9,
        'v', 37,
        '{', 102,
        '|', 53,
        '}', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 16,
        '"', 115,
        '&', 4,
        '(', 98,
        ')', 100,
        '*', 57,
        '+', 58,
        ',', 99,
        '-', 59,
        '/', 61,
        ';', 77,
        '<', 63,
        '=', 72,
        '>', 64,
        'f', 120,
        't', 141,
        '{', 102,
        '|', 53,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 115,
        '/', 7,
        'e', 136,
        'f', 120,
        'i', 130,
        'l', 128,
        'r', 129,
        's', 149,
        't', 141,
        '}', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '"', 115,
        '/', 7,
        'f', 120,
        'i', 130,
        'l', 128,
        'r', 129,
        's', 149,
        't', 141,
        '}', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(70);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        ')', 100,
        '*', 57,
        ',', 99,
        ';', 77,
        '=', 71,
        'b', 140,
        'i', 118,
        'u', 119,
        'v', 139,
        '{', 102,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(100);
      if (lookahead == ',') ADVANCE(99);
      if (lookahead == '}') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(12);
      if (lookahead == '8') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(15);
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(13);
      if (lookahead == '8') ADVANCE(78);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(80);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(85);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == '6') ADVANCE(83);
      END_STATE();
    case 15:
      if (lookahead == '6') ADVANCE(79);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(101);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 'z') ADVANCE(24);
      END_STATE();
    case 52:
      if (lookahead == 'z') ADVANCE(25);
      END_STATE();
    case 53:
      if (lookahead == '|') ADVANCE(69);
      END_STATE();
    case 54:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 55:
      if (eof) ADVANCE(56);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 's') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(101);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_usize);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_isize);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_void);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_return);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_if);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_else);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(12);
      if (lookahead == '8') ADVANCE(82);
      if (lookahead == 's') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(15);
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(13);
      if (lookahead == '8') ADVANCE(78);
      if (lookahead == 's') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'y')) ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'y')) ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 55},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 55},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 55},
  [70] = {.lex_state = 55},
  [71] = {.lex_state = 55},
  [72] = {.lex_state = 55},
  [73] = {.lex_state = 55},
  [74] = {.lex_state = 55},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 55},
  [77] = {.lex_state = 55},
  [78] = {.lex_state = 55},
  [79] = {.lex_state = 55},
  [80] = {.lex_state = 55},
  [81] = {.lex_state = 55},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 55},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 55},
  [112] = {.lex_state = 55},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 55},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 55},
  [117] = {.lex_state = 54},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 111},
  [123] = {.lex_state = 55},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 55},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 111},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 6},
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
    [sym_source_file] = STATE(129),
    [sym__definition] = STATE(47),
    [sym_variable_definition] = STATE(47),
    [sym_function_definition] = STATE(47),
    [sym_comment] = STATE(47),
    [sym_struct_declaration] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
    [anon_sym_fn] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_struct,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
    STATE(4), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
  [48] = 3,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(33), 16,
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
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [78] = 12,
    ACTIONS(42), 1,
      anon_sym_let,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      anon_sym_return,
    ACTIONS(50), 1,
      anon_sym_if,
    ACTIONS(53), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(56), 1,
      anon_sym_struct,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      sym_identifier,
    ACTIONS(65), 1,
      sym_integer,
    ACTIONS(39), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
    STATE(4), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
  [126] = 12,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_struct,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
    STATE(4), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
  [174] = 12,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_struct,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
    STATE(5), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
  [222] = 12,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_struct,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
    STATE(4), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
  [270] = 12,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_struct,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
    STATE(7), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
  [318] = 12,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_if,
    ACTIONS(23), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_struct,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(31), 1,
      sym_integer,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(38), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
    STATE(2), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
  [366] = 3,
    ACTIONS(78), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(82), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(80), 14,
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
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [395] = 2,
    ACTIONS(86), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(84), 16,
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
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [422] = 2,
    ACTIONS(82), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(80), 16,
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
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [449] = 2,
    ACTIONS(90), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(88), 16,
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
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [476] = 5,
    ACTIONS(78), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(94), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(82), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(80), 10,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [509] = 4,
    ACTIONS(78), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(82), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(80), 12,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [540] = 6,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(75), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(102), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(98), 5,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
    ACTIONS(100), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [575] = 7,
    ACTIONS(78), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(94), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(108), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(82), 4,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(80), 8,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [612] = 8,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(78), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(94), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(108), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(82), 4,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(80), 7,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [651] = 10,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(78), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(94), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(108), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(82), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(80), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [694] = 2,
    ACTIONS(118), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(116), 16,
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
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [721] = 2,
    ACTIONS(122), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(120), 16,
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
      anon_sym_LBRACE,
      anon_sym_DQUOTE,
      sym_integer,
  [748] = 11,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(78), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(94), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(108), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(128), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_integer,
  [791] = 5,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(108), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(102), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(100), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [819] = 5,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(92), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(102), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(100), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [847] = 5,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(95), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(102), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(100), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [875] = 5,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(96), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(102), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(100), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [903] = 5,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(109), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(102), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(100), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [931] = 5,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(102), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(102), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(100), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [959] = 5,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(100), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(102), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(100), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [987] = 5,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(89), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(102), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(100), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [1015] = 5,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(88), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(102), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(100), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [1043] = 5,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(118), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(102), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(100), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [1071] = 5,
    ACTIONS(96), 1,
      anon_sym_STAR,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(86), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(102), 4,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
    ACTIONS(100), 8,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
  [1099] = 10,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(130), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_block,
    ACTIONS(78), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(94), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(108), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1135] = 9,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    ACTIONS(78), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(94), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(108), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1168] = 9,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(134), 1,
      anon_sym_SEMI,
    ACTIONS(78), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(94), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(108), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1201] = 9,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    ACTIONS(78), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(94), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(108), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1234] = 9,
    ACTIONS(110), 1,
      anon_sym_AMP_AMP,
    ACTIONS(112), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    ACTIONS(78), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(92), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(94), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(106), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(108), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1267] = 2,
    ACTIONS(142), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(140), 8,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_struct,
      sym_identifier,
  [1284] = 3,
    ACTIONS(148), 1,
      anon_sym_else,
    ACTIONS(146), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(144), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_struct,
      sym_identifier,
  [1303] = 2,
    ACTIONS(152), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(150), 8,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_struct,
      sym_identifier,
  [1320] = 7,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      sym_identifier,
    ACTIONS(165), 1,
      sym_integer,
    STATE(42), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(154), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
  [1347] = 7,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(170), 1,
      sym_integer,
    STATE(42), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
  [1374] = 7,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      aux_sym_function_call_repeat1,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
  [1401] = 2,
    ACTIONS(176), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(174), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_struct,
      sym_identifier,
  [1417] = 2,
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
  [1433] = 6,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(7), 1,
      anon_sym_fn,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    STATE(50), 6,
      sym__definition,
      sym_variable_definition,
      sym_function_definition,
      sym_comment,
      sym_struct_declaration,
      aux_sym_source_file_repeat1,
  [1457] = 2,
    ACTIONS(142), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(140), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_struct,
      sym_identifier,
  [1473] = 2,
    ACTIONS(152), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(150), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_struct,
      sym_identifier,
  [1489] = 6,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      anon_sym_let,
    ACTIONS(189), 1,
      anon_sym_fn,
    ACTIONS(192), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(195), 1,
      anon_sym_struct,
    STATE(50), 6,
      sym__definition,
      sym_variable_definition,
      sym_function_definition,
      sym_comment,
      sym_struct_declaration,
      aux_sym_source_file_repeat1,
  [1513] = 2,
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
  [1529] = 2,
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
  [1545] = 2,
    ACTIONS(208), 4,
      anon_sym_RBRACE,
      anon_sym_SLASH_SLASH,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(206), 7,
      anon_sym_true,
      anon_sym_false,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_struct,
      sym_identifier,
  [1561] = 2,
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
  [1577] = 2,
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
  [1593] = 2,
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
  [1609] = 5,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(222), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
  [1630] = 5,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(224), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
  [1651] = 5,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(226), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(14), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
  [1672] = 5,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(228), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
  [1693] = 5,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(230), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(35), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
  [1714] = 5,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
  [1735] = 5,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(12), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
  [1756] = 5,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(236), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
  [1777] = 5,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(238), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
  [1798] = 5,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(240), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
  [1819] = 5,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(242), 1,
      sym_integer,
    ACTIONS(13), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(15), 5,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_function_call,
      sym_string_literal,
  [1840] = 2,
    ACTIONS(157), 3,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_integer,
    ACTIONS(244), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1851] = 1,
    ACTIONS(200), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [1859] = 1,
    ACTIONS(212), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [1867] = 1,
    ACTIONS(246), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [1875] = 1,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [1883] = 1,
    ACTIONS(216), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [1891] = 1,
    ACTIONS(248), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [1899] = 1,
    ACTIONS(250), 5,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [1907] = 1,
    ACTIONS(204), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [1915] = 1,
    ACTIONS(252), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [1923] = 1,
    ACTIONS(254), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [1931] = 1,
    ACTIONS(256), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [1939] = 1,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [1947] = 1,
    ACTIONS(258), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [1955] = 1,
    ACTIONS(260), 5,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [1963] = 1,
    ACTIONS(262), 5,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [1971] = 1,
    ACTIONS(176), 5,
      ts_builtin_sym_end,
      anon_sym_let,
      anon_sym_fn,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [1979] = 4,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(90), 1,
      aux_sym_function_definition_repeat1,
  [1992] = 3,
    ACTIONS(270), 1,
      anon_sym_SEMI,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_block,
  [2002] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_function_definition_repeat1,
  [2012] = 3,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_function_definition_repeat1,
  [2022] = 3,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      sym_block,
  [2032] = 3,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_function_definition_repeat1,
  [2042] = 3,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(291), 1,
      sym_identifier,
    STATE(99), 1,
      aux_sym_struct_declaration_repeat1,
  [2052] = 3,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      sym_block,
  [2062] = 3,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    ACTIONS(297), 1,
      sym_identifier,
    STATE(93), 1,
      aux_sym_struct_declaration_repeat1,
  [2072] = 3,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    ACTIONS(304), 1,
      sym_identifier,
  [2082] = 3,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      sym_block,
  [2092] = 3,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(308), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym_block,
  [2102] = 3,
    ACTIONS(291), 1,
      sym_identifier,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_struct_declaration_repeat1,
  [2112] = 3,
    ACTIONS(291), 1,
      sym_identifier,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_struct_declaration_repeat1,
  [2122] = 3,
    ACTIONS(291), 1,
      sym_identifier,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      aux_sym_struct_declaration_repeat1,
  [2132] = 3,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_block,
  [2142] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_function_definition_repeat1,
  [2152] = 2,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
  [2159] = 2,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
  [2166] = 2,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_block,
  [2173] = 2,
    ACTIONS(268), 1,
      sym_identifier,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
  [2180] = 1,
    ACTIONS(327), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [2185] = 1,
    ACTIONS(329), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2190] = 2,
    ACTIONS(331), 1,
      anon_sym_EQ,
    ACTIONS(333), 1,
      anon_sym_SEMI,
  [2197] = 2,
    ACTIONS(335), 1,
      anon_sym_EQ,
    ACTIONS(337), 1,
      anon_sym_SEMI,
  [2204] = 1,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
  [2208] = 1,
    ACTIONS(341), 1,
      anon_sym_DASH_GT,
  [2212] = 1,
    ACTIONS(343), 1,
      anon_sym_DASH_GT,
  [2216] = 1,
    ACTIONS(345), 1,
      anon_sym_COLON,
  [2220] = 1,
    ACTIONS(347), 1,
      anon_sym_DASH_GT,
  [2224] = 1,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
  [2228] = 1,
    ACTIONS(351), 1,
      anon_sym_DASH_GT,
  [2232] = 1,
    ACTIONS(353), 1,
      aux_sym_string_literal_token1,
  [2236] = 1,
    ACTIONS(355), 1,
      anon_sym_SEMI,
  [2240] = 1,
    ACTIONS(357), 1,
      sym_identifier,
  [2244] = 1,
    ACTIONS(359), 1,
      anon_sym_COLON,
  [2248] = 1,
    ACTIONS(361), 1,
      anon_sym_LBRACE,
  [2252] = 1,
    ACTIONS(363), 1,
      aux_sym_comment_token1,
  [2256] = 1,
    ACTIONS(365), 1,
      anon_sym_DASH_GT,
  [2260] = 1,
    ACTIONS(268), 1,
      sym_identifier,
  [2264] = 1,
    ACTIONS(367), 1,
      anon_sym_COLON,
  [2268] = 1,
    ACTIONS(369), 1,
      anon_sym_DASH_GT,
  [2272] = 1,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
  [2276] = 1,
    ACTIONS(373), 1,
      anon_sym_COLON,
  [2280] = 1,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
  [2284] = 1,
    ACTIONS(377), 1,
      sym_identifier,
  [2288] = 1,
    ACTIONS(379), 1,
      anon_sym_LBRACE,
  [2292] = 1,
    ACTIONS(381), 1,
      aux_sym_comment_token1,
  [2296] = 1,
    ACTIONS(383), 1,
      sym_identifier,
  [2300] = 1,
    ACTIONS(385), 1,
      sym_identifier,
  [2304] = 1,
    ACTIONS(387), 1,
      anon_sym_COLON,
  [2308] = 1,
    ACTIONS(389), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 174,
  [SMALL_STATE(7)] = 222,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 318,
  [SMALL_STATE(10)] = 366,
  [SMALL_STATE(11)] = 395,
  [SMALL_STATE(12)] = 422,
  [SMALL_STATE(13)] = 449,
  [SMALL_STATE(14)] = 476,
  [SMALL_STATE(15)] = 509,
  [SMALL_STATE(16)] = 540,
  [SMALL_STATE(17)] = 575,
  [SMALL_STATE(18)] = 612,
  [SMALL_STATE(19)] = 651,
  [SMALL_STATE(20)] = 694,
  [SMALL_STATE(21)] = 721,
  [SMALL_STATE(22)] = 748,
  [SMALL_STATE(23)] = 791,
  [SMALL_STATE(24)] = 819,
  [SMALL_STATE(25)] = 847,
  [SMALL_STATE(26)] = 875,
  [SMALL_STATE(27)] = 903,
  [SMALL_STATE(28)] = 931,
  [SMALL_STATE(29)] = 959,
  [SMALL_STATE(30)] = 987,
  [SMALL_STATE(31)] = 1015,
  [SMALL_STATE(32)] = 1043,
  [SMALL_STATE(33)] = 1071,
  [SMALL_STATE(34)] = 1099,
  [SMALL_STATE(35)] = 1135,
  [SMALL_STATE(36)] = 1168,
  [SMALL_STATE(37)] = 1201,
  [SMALL_STATE(38)] = 1234,
  [SMALL_STATE(39)] = 1267,
  [SMALL_STATE(40)] = 1284,
  [SMALL_STATE(41)] = 1303,
  [SMALL_STATE(42)] = 1320,
  [SMALL_STATE(43)] = 1347,
  [SMALL_STATE(44)] = 1374,
  [SMALL_STATE(45)] = 1401,
  [SMALL_STATE(46)] = 1417,
  [SMALL_STATE(47)] = 1433,
  [SMALL_STATE(48)] = 1457,
  [SMALL_STATE(49)] = 1473,
  [SMALL_STATE(50)] = 1489,
  [SMALL_STATE(51)] = 1513,
  [SMALL_STATE(52)] = 1529,
  [SMALL_STATE(53)] = 1545,
  [SMALL_STATE(54)] = 1561,
  [SMALL_STATE(55)] = 1577,
  [SMALL_STATE(56)] = 1593,
  [SMALL_STATE(57)] = 1609,
  [SMALL_STATE(58)] = 1630,
  [SMALL_STATE(59)] = 1651,
  [SMALL_STATE(60)] = 1672,
  [SMALL_STATE(61)] = 1693,
  [SMALL_STATE(62)] = 1714,
  [SMALL_STATE(63)] = 1735,
  [SMALL_STATE(64)] = 1756,
  [SMALL_STATE(65)] = 1777,
  [SMALL_STATE(66)] = 1798,
  [SMALL_STATE(67)] = 1819,
  [SMALL_STATE(68)] = 1840,
  [SMALL_STATE(69)] = 1851,
  [SMALL_STATE(70)] = 1859,
  [SMALL_STATE(71)] = 1867,
  [SMALL_STATE(72)] = 1875,
  [SMALL_STATE(73)] = 1883,
  [SMALL_STATE(74)] = 1891,
  [SMALL_STATE(75)] = 1899,
  [SMALL_STATE(76)] = 1907,
  [SMALL_STATE(77)] = 1915,
  [SMALL_STATE(78)] = 1923,
  [SMALL_STATE(79)] = 1931,
  [SMALL_STATE(80)] = 1939,
  [SMALL_STATE(81)] = 1947,
  [SMALL_STATE(82)] = 1955,
  [SMALL_STATE(83)] = 1963,
  [SMALL_STATE(84)] = 1971,
  [SMALL_STATE(85)] = 1979,
  [SMALL_STATE(86)] = 1992,
  [SMALL_STATE(87)] = 2002,
  [SMALL_STATE(88)] = 2012,
  [SMALL_STATE(89)] = 2022,
  [SMALL_STATE(90)] = 2032,
  [SMALL_STATE(91)] = 2042,
  [SMALL_STATE(92)] = 2052,
  [SMALL_STATE(93)] = 2062,
  [SMALL_STATE(94)] = 2072,
  [SMALL_STATE(95)] = 2082,
  [SMALL_STATE(96)] = 2092,
  [SMALL_STATE(97)] = 2102,
  [SMALL_STATE(98)] = 2112,
  [SMALL_STATE(99)] = 2122,
  [SMALL_STATE(100)] = 2132,
  [SMALL_STATE(101)] = 2142,
  [SMALL_STATE(102)] = 2152,
  [SMALL_STATE(103)] = 2159,
  [SMALL_STATE(104)] = 2166,
  [SMALL_STATE(105)] = 2173,
  [SMALL_STATE(106)] = 2180,
  [SMALL_STATE(107)] = 2185,
  [SMALL_STATE(108)] = 2190,
  [SMALL_STATE(109)] = 2197,
  [SMALL_STATE(110)] = 2204,
  [SMALL_STATE(111)] = 2208,
  [SMALL_STATE(112)] = 2212,
  [SMALL_STATE(113)] = 2216,
  [SMALL_STATE(114)] = 2220,
  [SMALL_STATE(115)] = 2224,
  [SMALL_STATE(116)] = 2228,
  [SMALL_STATE(117)] = 2232,
  [SMALL_STATE(118)] = 2236,
  [SMALL_STATE(119)] = 2240,
  [SMALL_STATE(120)] = 2244,
  [SMALL_STATE(121)] = 2248,
  [SMALL_STATE(122)] = 2252,
  [SMALL_STATE(123)] = 2256,
  [SMALL_STATE(124)] = 2260,
  [SMALL_STATE(125)] = 2264,
  [SMALL_STATE(126)] = 2268,
  [SMALL_STATE(127)] = 2272,
  [SMALL_STATE(128)] = 2276,
  [SMALL_STATE(129)] = 2280,
  [SMALL_STATE(130)] = 2284,
  [SMALL_STATE(131)] = 2288,
  [SMALL_STATE(132)] = 2292,
  [SMALL_STATE(133)] = 2296,
  [SMALL_STATE(134)] = 2300,
  [SMALL_STATE(135)] = 2304,
  [SMALL_STATE(136)] = 2308,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 5),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4, 0, 5),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 5),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3, 0, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 7, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 7, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(132),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_declaration, 5, 0, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 5, 0, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_declaration, 4, 0, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 4, 0, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 8, 0, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 10, 0, 7),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 11, 0, 7),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 12, 0, 7),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 13, 0, 7),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, 0, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 0),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 4, 0, 6), SHIFT_REPEAT(107),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 4, 0, 6),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 4, 0, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 5, 0, 6),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [375] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
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
