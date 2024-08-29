#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 3
#define TOKEN_COUNT 44
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

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
  anon_sym_u8 = 16,
  anon_sym_u16 = 17,
  anon_sym_u32 = 18,
  anon_sym_u64 = 19,
  anon_sym_i8 = 20,
  anon_sym_i16 = 21,
  anon_sym_i32 = 22,
  anon_sym_i64 = 23,
  anon_sym_usize = 24,
  anon_sym_isize = 25,
  anon_sym_bool = 26,
  anon_sym_void = 27,
  anon_sym_SEMI = 28,
  anon_sym_LPAREN = 29,
  anon_sym_COMMA = 30,
  anon_sym_RPAREN = 31,
  anon_sym_LBRACE = 32,
  anon_sym_RBRACE = 33,
  anon_sym_return = 34,
  anon_sym_if = 35,
  anon_sym_else = 36,
  anon_sym_SLASH_SLASH = 37,
  aux_sym_comment_token1 = 38,
  anon_sym_struct = 39,
  anon_sym_DQUOTE = 40,
  aux_sym_string_literal_token1 = 41,
  sym_identifier = 42,
  sym_integer = 43,
  sym_source_file = 44,
  sym__definition = 45,
  sym__type = 46,
  sym_pointer_type = 47,
  sym__expression = 48,
  sym_binary_expression = 49,
  sym_bool = 50,
  sym__statement = 51,
  sym_primitive_type = 52,
  sym_variable_definition = 53,
  sym_function_definition = 54,
  sym_block = 55,
  sym_return_statement = 56,
  sym_if_statement = 57,
  sym_comment = 58,
  sym_struct_declaration = 59,
  sym_string_literal = 60,
  aux_sym_source_file_repeat1 = 61,
  aux_sym_function_definition_repeat1 = 62,
  aux_sym_block_repeat1 = 63,
  aux_sym_struct_declaration_repeat1 = 64,
  alias_sym_function_name = 65,
  alias_sym_function_parameter = 66,
  alias_sym_struct_field = 67,
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
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
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
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_struct_declaration_repeat1] = "struct_declaration_repeat1",
  [alias_sym_function_name] = "function_name",
  [alias_sym_function_parameter] = "function_parameter",
  [alias_sym_struct_field] = "struct_field",
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_string_literal] = sym_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_struct_declaration_repeat1] = aux_sym_struct_declaration_repeat1,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_function_parameter] = alias_sym_function_parameter,
  [alias_sym_struct_field] = alias_sym_struct_field,
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
  [anon_sym_SEMI] = {
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_struct_field,
  },
  [2] = {
    [1] = alias_sym_function_name,
  },
  [3] = {
    [1] = alias_sym_function_parameter,
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
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
  [41] = 41,
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
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      ADVANCE_MAP(
        '!', 13,
        '"', 93,
        '&', 2,
        '(', 81,
        ')', 83,
        '*', 50,
        '+', 51,
        ',', 82,
        '-', 52,
        '/', 54,
        ';', 80,
        '<', 55,
        '=', 63,
        '>', 56,
        'b', 32,
        'e', 26,
        'f', 14,
        'i', 5,
        'r', 22,
        's', 40,
        't', 33,
        'u', 6,
        'v', 31,
        '{', 84,
        '|', 46,
        '}', 85,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 13,
        '"', 93,
        '&', 2,
        '*', 50,
        '+', 51,
        '-', 52,
        '/', 53,
        ';', 80,
        '<', 55,
        '=', 63,
        '>', 56,
        'f', 96,
        't', 100,
        '{', 84,
        '|', 46,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == '8') ADVANCE(68);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(75);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(71);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(73);
      END_STATE();
    case 12:
      if (lookahead == '6') ADVANCE(69);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 44:
      if (lookahead == 'z') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 'z') ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == '|') ADVANCE(61);
      END_STATE();
    case 47:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(95);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      ADVANCE_MAP(
        '*', 50,
        '/', 4,
        'b', 32,
        'e', 26,
        'i', 5,
        'r', 22,
        's', 40,
        'u', 6,
        'v', 31,
        '}', 85,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 48},
  [3] = {.lex_state = 48},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 48},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 48},
  [8] = {.lex_state = 48},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 48},
  [11] = {.lex_state = 48},
  [12] = {.lex_state = 48},
  [13] = {.lex_state = 48},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 48},
  [24] = {.lex_state = 48},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 47},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 90},
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
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [sym_source_file] = STATE(66),
    [sym__definition] = STATE(6),
    [sym__type] = STATE(60),
    [sym_pointer_type] = STATE(60),
    [sym_primitive_type] = STATE(60),
    [sym_variable_definition] = STATE(6),
    [sym_function_definition] = STATE(6),
    [sym_comment] = STATE(6),
    [sym_struct_declaration] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(5),
    [anon_sym_u8] = ACTIONS(7),
    [anon_sym_u16] = ACTIONS(7),
    [anon_sym_u32] = ACTIONS(7),
    [anon_sym_u64] = ACTIONS(7),
    [anon_sym_i8] = ACTIONS(7),
    [anon_sym_i16] = ACTIONS(7),
    [anon_sym_i32] = ACTIONS(7),
    [anon_sym_i64] = ACTIONS(7),
    [anon_sym_usize] = ACTIONS(7),
    [anon_sym_isize] = ACTIONS(7),
    [anon_sym_bool] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_if,
    STATE(55), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(4), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
    ACTIONS(7), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
  [47] = 9,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(15), 1,
      anon_sym_return,
    ACTIONS(17), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(55), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(2), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
    ACTIONS(7), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
  [94] = 9,
    ACTIONS(21), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(32), 1,
      anon_sym_if,
    ACTIONS(35), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(38), 1,
      anon_sym_struct,
    STATE(55), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(4), 7,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      sym_struct_declaration,
      aux_sym_block_repeat1,
    ACTIONS(24), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
  [141] = 7,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_STAR,
    ACTIONS(49), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(52), 1,
      anon_sym_struct,
    STATE(60), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(5), 6,
      sym__definition,
      sym_variable_definition,
      sym_function_definition,
      sym_comment,
      sym_struct_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(46), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
  [181] = 7,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(60), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(5), 6,
      sym__definition,
      sym_variable_definition,
      sym_function_definition,
      sym_comment,
      sym_struct_declaration,
      aux_sym_source_file_repeat1,
    ACTIONS(7), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
  [221] = 1,
    ACTIONS(57), 20,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [244] = 1,
    ACTIONS(59), 20,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_if,
      anon_sym_else,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [267] = 1,
    ACTIONS(61), 19,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_if,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [289] = 1,
    ACTIONS(63), 19,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_if,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [311] = 1,
    ACTIONS(65), 19,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_if,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [333] = 1,
    ACTIONS(67), 19,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_if,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [355] = 2,
    ACTIONS(71), 1,
      anon_sym_else,
    ACTIONS(69), 18,
      anon_sym_STAR,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_if,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [379] = 1,
    ACTIONS(73), 19,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_if,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [401] = 1,
    ACTIONS(75), 18,
      anon_sym_STAR,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_if,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [422] = 1,
    ACTIONS(77), 18,
      anon_sym_STAR,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_RBRACE,
      anon_sym_return,
      anon_sym_if,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [443] = 5,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_struct_declaration_repeat1,
    STATE(57), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(7), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
  [472] = 5,
    ACTIONS(81), 1,
      anon_sym_STAR,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_function_definition_repeat1,
    STATE(58), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(84), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
  [501] = 5,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_function_definition_repeat1,
    STATE(58), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(7), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
  [530] = 5,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_struct_declaration_repeat1,
    STATE(57), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(7), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
  [559] = 5,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_function_definition_repeat1,
    STATE(58), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(7), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
  [588] = 5,
    ACTIONS(95), 1,
      anon_sym_STAR,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym_struct_declaration_repeat1,
    STATE(57), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(98), 12,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
  [617] = 1,
    ACTIONS(103), 16,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [636] = 1,
    ACTIONS(105), 16,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_SLASH_SLASH,
      anon_sym_struct,
  [655] = 7,
    ACTIONS(119), 1,
      anon_sym_EQ,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(115), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(117), 4,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [685] = 2,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(121), 14,
      anon_sym_STAR,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_RPAREN,
  [705] = 10,
    ACTIONS(125), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP_AMP,
    ACTIONS(129), 1,
      anon_sym_EQ,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_block,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(115), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [741] = 2,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(133), 14,
      anon_sym_STAR,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_RBRACE,
  [761] = 9,
    ACTIONS(125), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP_AMP,
    ACTIONS(129), 1,
      anon_sym_EQ,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(115), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(117), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [795] = 8,
    ACTIONS(119), 1,
      anon_sym_EQ,
    ACTIONS(127), 1,
      anon_sym_AMP_AMP,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(115), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(117), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [827] = 4,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(119), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(117), 8,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [851] = 5,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(115), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(119), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(117), 6,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [877] = 3,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(119), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(117), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [899] = 2,
    ACTIONS(119), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(117), 12,
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
      anon_sym_LBRACE,
  [919] = 2,
    ACTIONS(139), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(137), 12,
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
      anon_sym_LBRACE,
  [939] = 2,
    ACTIONS(143), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(141), 12,
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
      anon_sym_LBRACE,
  [959] = 9,
    ACTIONS(125), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP_AMP,
    ACTIONS(129), 1,
      anon_sym_EQ,
    ACTIONS(145), 1,
      anon_sym_SEMI,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(115), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [992] = 1,
    ACTIONS(147), 14,
      anon_sym_STAR,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_RPAREN,
  [1009] = 9,
    ACTIONS(125), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(127), 1,
      anon_sym_AMP_AMP,
    ACTIONS(129), 1,
      anon_sym_EQ,
    ACTIONS(149), 1,
      anon_sym_SEMI,
    ACTIONS(107), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(109), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(111), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(115), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1042] = 1,
    ACTIONS(151), 14,
      anon_sym_STAR,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_usize,
      anon_sym_isize,
      anon_sym_bool,
      anon_sym_void,
      anon_sym_RBRACE,
  [1059] = 5,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      sym_identifier,
    ACTIONS(159), 1,
      sym_integer,
    ACTIONS(153), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [1079] = 5,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(163), 1,
      sym_integer,
    ACTIONS(153), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(37), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [1099] = 5,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      sym_identifier,
    ACTIONS(167), 1,
      sym_integer,
    ACTIONS(153), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(34), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [1119] = 5,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      sym_integer,
    ACTIONS(153), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [1139] = 5,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      sym_integer,
    ACTIONS(153), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [1159] = 5,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      sym_integer,
    ACTIONS(153), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(39), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [1179] = 5,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      sym_identifier,
    ACTIONS(183), 1,
      sym_integer,
    ACTIONS(153), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [1199] = 5,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(187), 1,
      sym_integer,
    ACTIONS(153), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [1219] = 5,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(191), 1,
      sym_integer,
    ACTIONS(153), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [1239] = 5,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(153), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [1259] = 3,
    ACTIONS(197), 1,
      anon_sym_EQ,
    ACTIONS(199), 1,
      anon_sym_SEMI,
    ACTIONS(201), 1,
      anon_sym_LPAREN,
  [1269] = 3,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_block,
  [1279] = 3,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_block,
  [1289] = 1,
    ACTIONS(207), 2,
      anon_sym_STAR,
      sym_identifier,
  [1294] = 2,
    ACTIONS(209), 1,
      anon_sym_STAR,
    ACTIONS(211), 1,
      sym_identifier,
  [1301] = 1,
    ACTIONS(213), 2,
      anon_sym_STAR,
      sym_identifier,
  [1306] = 2,
    ACTIONS(209), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      sym_identifier,
  [1313] = 2,
    ACTIONS(209), 1,
      anon_sym_STAR,
    ACTIONS(217), 1,
      sym_identifier,
  [1320] = 2,
    ACTIONS(197), 1,
      anon_sym_EQ,
    ACTIONS(199), 1,
      anon_sym_SEMI,
  [1327] = 2,
    ACTIONS(209), 1,
      anon_sym_STAR,
    ACTIONS(219), 1,
      sym_identifier,
  [1334] = 2,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [1341] = 1,
    ACTIONS(221), 2,
      anon_sym_STAR,
      sym_identifier,
  [1346] = 1,
    ACTIONS(223), 1,
      aux_sym_string_literal_token1,
  [1350] = 1,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
  [1354] = 1,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
  [1358] = 1,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
  [1362] = 1,
    ACTIONS(231), 1,
      sym_identifier,
  [1366] = 1,
    ACTIONS(233), 1,
      aux_sym_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 181,
  [SMALL_STATE(7)] = 221,
  [SMALL_STATE(8)] = 244,
  [SMALL_STATE(9)] = 267,
  [SMALL_STATE(10)] = 289,
  [SMALL_STATE(11)] = 311,
  [SMALL_STATE(12)] = 333,
  [SMALL_STATE(13)] = 355,
  [SMALL_STATE(14)] = 379,
  [SMALL_STATE(15)] = 401,
  [SMALL_STATE(16)] = 422,
  [SMALL_STATE(17)] = 443,
  [SMALL_STATE(18)] = 472,
  [SMALL_STATE(19)] = 501,
  [SMALL_STATE(20)] = 530,
  [SMALL_STATE(21)] = 559,
  [SMALL_STATE(22)] = 588,
  [SMALL_STATE(23)] = 617,
  [SMALL_STATE(24)] = 636,
  [SMALL_STATE(25)] = 655,
  [SMALL_STATE(26)] = 685,
  [SMALL_STATE(27)] = 705,
  [SMALL_STATE(28)] = 741,
  [SMALL_STATE(29)] = 761,
  [SMALL_STATE(30)] = 795,
  [SMALL_STATE(31)] = 827,
  [SMALL_STATE(32)] = 851,
  [SMALL_STATE(33)] = 877,
  [SMALL_STATE(34)] = 899,
  [SMALL_STATE(35)] = 919,
  [SMALL_STATE(36)] = 939,
  [SMALL_STATE(37)] = 959,
  [SMALL_STATE(38)] = 992,
  [SMALL_STATE(39)] = 1009,
  [SMALL_STATE(40)] = 1042,
  [SMALL_STATE(41)] = 1059,
  [SMALL_STATE(42)] = 1079,
  [SMALL_STATE(43)] = 1099,
  [SMALL_STATE(44)] = 1119,
  [SMALL_STATE(45)] = 1139,
  [SMALL_STATE(46)] = 1159,
  [SMALL_STATE(47)] = 1179,
  [SMALL_STATE(48)] = 1199,
  [SMALL_STATE(49)] = 1219,
  [SMALL_STATE(50)] = 1239,
  [SMALL_STATE(51)] = 1259,
  [SMALL_STATE(52)] = 1269,
  [SMALL_STATE(53)] = 1279,
  [SMALL_STATE(54)] = 1289,
  [SMALL_STATE(55)] = 1294,
  [SMALL_STATE(56)] = 1301,
  [SMALL_STATE(57)] = 1306,
  [SMALL_STATE(58)] = 1313,
  [SMALL_STATE(59)] = 1320,
  [SMALL_STATE(60)] = 1327,
  [SMALL_STATE(61)] = 1334,
  [SMALL_STATE(62)] = 1341,
  [SMALL_STATE(63)] = 1346,
  [SMALL_STATE(64)] = 1350,
  [SMALL_STATE(65)] = 1354,
  [SMALL_STATE(66)] = 1358,
  [SMALL_STATE(67)] = 1362,
  [SMALL_STATE(68)] = 1366,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 5, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_declaration, 4, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 2, 0, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 3, 0, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_declaration_repeat1, 3, 0, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 1, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [229] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
