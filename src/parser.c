#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 2
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

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
  anon_sym_DQUOTE = 39,
  aux_sym_string_literal_token1 = 40,
  sym_identifier = 41,
  sym_integer = 42,
  sym_source_file = 43,
  sym__definition = 44,
  sym__type = 45,
  sym_pointer_type = 46,
  sym__expression = 47,
  sym_binary_expression = 48,
  sym_bool = 49,
  sym__statement = 50,
  sym_primitive_type = 51,
  sym_variable_definition = 52,
  sym_function_definition = 53,
  sym_block = 54,
  sym_return_statement = 55,
  sym_if_statement = 56,
  sym_comment = 57,
  sym_string_literal = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym_function_definition_repeat1 = 60,
  aux_sym_block_repeat1 = 61,
  alias_sym_function_name = 62,
  alias_sym_function_parameter = 63,
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
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_definition_repeat1] = "function_definition_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [alias_sym_function_name] = "function_name",
  [alias_sym_function_parameter] = "function_parameter",
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
  [sym_string_literal] = sym_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_definition_repeat1] = aux_sym_function_definition_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [alias_sym_function_name] = alias_sym_function_name,
  [alias_sym_function_parameter] = alias_sym_function_parameter,
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
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_parameter] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_function_name,
  },
  [2] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(44);
      ADVANCE_MAP(
        '!', 13,
        '"', 87,
        '&', 2,
        '(', 76,
        ')', 78,
        '*', 45,
        '+', 46,
        ',', 77,
        '-', 47,
        '/', 49,
        ';', 75,
        '<', 50,
        '=', 58,
        '>', 51,
        'b', 31,
        'e', 25,
        'f', 14,
        'i', 5,
        'r', 16,
        't', 32,
        'u', 6,
        'v', 30,
        '{', 79,
        '|', 41,
        '}', 80,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 13,
        '"', 87,
        '&', 2,
        '*', 45,
        '+', 46,
        '-', 47,
        '/', 48,
        ';', 75,
        '<', 50,
        '=', 58,
        '>', 51,
        'f', 90,
        't', 94,
        '{', 79,
        '|', 41,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(57);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == '8') ADVANCE(63);
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(65);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(66);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(68);
      END_STATE();
    case 12:
      if (lookahead == '6') ADVANCE(64);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 39:
      if (lookahead == 'z') ADVANCE(20);
      END_STATE();
    case 40:
      if (lookahead == 'z') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == '|') ADVANCE(56);
      END_STATE();
    case 42:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(89);
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      ADVANCE_MAP(
        '*', 45,
        '/', 4,
        'b', 31,
        'e', 25,
        'i', 5,
        'r', 16,
        'u', 6,
        'v', 30,
        '}', 80,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(84);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(62);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(91);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 43},
  [2] = {.lex_state = 43},
  [3] = {.lex_state = 43},
  [4] = {.lex_state = 43},
  [5] = {.lex_state = 43},
  [6] = {.lex_state = 43},
  [7] = {.lex_state = 43},
  [8] = {.lex_state = 43},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 43},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 43},
  [16] = {.lex_state = 43},
  [17] = {.lex_state = 43},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 43},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 43},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 42},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 85},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(57),
    [sym__definition] = STATE(5),
    [sym__type] = STATE(52),
    [sym_pointer_type] = STATE(52),
    [sym_primitive_type] = STATE(52),
    [sym_variable_definition] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym_comment] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(22), 1,
      anon_sym_if,
    ACTIONS(25), 1,
      anon_sym_SLASH_SLASH,
    STATE(48), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(2), 6,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
      aux_sym_block_repeat1,
    ACTIONS(14), 12,
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
  [43] = 8,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    ACTIONS(30), 1,
      anon_sym_return,
    ACTIONS(32), 1,
      anon_sym_if,
    STATE(48), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(2), 6,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
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
  [86] = 8,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(30), 1,
      anon_sym_return,
    ACTIONS(32), 1,
      anon_sym_if,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(48), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(3), 6,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      sym_comment,
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
  [129] = 6,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(52), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(6), 5,
      sym__definition,
      sym_variable_definition,
      sym_function_definition,
      sym_comment,
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
  [165] = 6,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_STAR,
    ACTIONS(46), 1,
      anon_sym_SLASH_SLASH,
    STATE(52), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(6), 5,
      sym__definition,
      sym_variable_definition,
      sym_function_definition,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(43), 12,
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
  [201] = 1,
    ACTIONS(49), 19,
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
  [223] = 1,
    ACTIONS(51), 19,
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
  [245] = 5,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      aux_sym_function_definition_repeat1,
    STATE(51), 3,
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
  [274] = 2,
    ACTIONS(57), 1,
      anon_sym_else,
    ACTIONS(55), 17,
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
  [297] = 1,
    ACTIONS(59), 18,
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
  [318] = 1,
    ACTIONS(61), 18,
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
  [339] = 5,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_function_definition_repeat1,
    STATE(51), 3,
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
  [368] = 5,
    ACTIONS(65), 1,
      anon_sym_STAR,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      aux_sym_function_definition_repeat1,
    STATE(51), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(68), 12,
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
  [397] = 1,
    ACTIONS(73), 18,
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
  [418] = 1,
    ACTIONS(75), 17,
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
  [438] = 1,
    ACTIONS(77), 17,
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
  [458] = 7,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 4,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [488] = 1,
    ACTIONS(93), 15,
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
  [506] = 10,
    ACTIONS(95), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(97), 1,
      anon_sym_AMP_AMP,
    ACTIONS(99), 1,
      anon_sym_EQ,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_block,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [542] = 9,
    ACTIONS(95), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(97), 1,
      anon_sym_AMP_AMP,
    ACTIONS(99), 1,
      anon_sym_EQ,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [576] = 2,
    ACTIONS(105), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(103), 12,
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
  [596] = 8,
    ACTIONS(91), 1,
      anon_sym_EQ,
    ACTIONS(97), 1,
      anon_sym_AMP_AMP,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [628] = 4,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(89), 8,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [652] = 5,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(89), 6,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [678] = 3,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(89), 10,
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
  [700] = 2,
    ACTIONS(91), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(89), 12,
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
  [720] = 2,
    ACTIONS(109), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(107), 12,
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
  [740] = 2,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(111), 14,
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
  [760] = 1,
    ACTIONS(115), 15,
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
  [778] = 1,
    ACTIONS(117), 14,
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
  [795] = 9,
    ACTIONS(95), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(97), 1,
      anon_sym_AMP_AMP,
    ACTIONS(99), 1,
      anon_sym_EQ,
    ACTIONS(119), 1,
      anon_sym_SEMI,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [828] = 9,
    ACTIONS(95), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(97), 1,
      anon_sym_AMP_AMP,
    ACTIONS(99), 1,
      anon_sym_EQ,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [861] = 5,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(123), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [881] = 5,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      sym_integer,
    ACTIONS(123), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [901] = 5,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      sym_integer,
    ACTIONS(123), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [921] = 5,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(141), 1,
      sym_integer,
    ACTIONS(123), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [941] = 5,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(145), 1,
      sym_integer,
    ACTIONS(123), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [961] = 5,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      sym_integer,
    ACTIONS(123), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [981] = 5,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(153), 1,
      sym_integer,
    ACTIONS(123), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [1001] = 5,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      sym_identifier,
    ACTIONS(157), 1,
      sym_integer,
    ACTIONS(123), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [1021] = 5,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      sym_integer,
    ACTIONS(123), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [1041] = 5,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      sym_identifier,
    ACTIONS(165), 1,
      sym_integer,
    ACTIONS(123), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [1061] = 3,
    ACTIONS(167), 1,
      anon_sym_EQ,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
  [1071] = 3,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym_block,
  [1081] = 3,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      sym_block,
  [1091] = 1,
    ACTIONS(177), 2,
      anon_sym_STAR,
      sym_identifier,
  [1096] = 2,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(181), 1,
      sym_identifier,
  [1103] = 1,
    ACTIONS(183), 2,
      anon_sym_STAR,
      sym_identifier,
  [1108] = 2,
    ACTIONS(167), 1,
      anon_sym_EQ,
    ACTIONS(169), 1,
      anon_sym_SEMI,
  [1115] = 2,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(185), 1,
      sym_identifier,
  [1122] = 2,
    ACTIONS(179), 1,
      anon_sym_STAR,
    ACTIONS(187), 1,
      sym_identifier,
  [1129] = 2,
    ACTIONS(101), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_block,
  [1136] = 1,
    ACTIONS(189), 2,
      anon_sym_STAR,
      sym_identifier,
  [1141] = 1,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
  [1145] = 1,
    ACTIONS(193), 1,
      aux_sym_string_literal_token1,
  [1149] = 1,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [1153] = 1,
    ACTIONS(197), 1,
      aux_sym_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 129,
  [SMALL_STATE(6)] = 165,
  [SMALL_STATE(7)] = 201,
  [SMALL_STATE(8)] = 223,
  [SMALL_STATE(9)] = 245,
  [SMALL_STATE(10)] = 274,
  [SMALL_STATE(11)] = 297,
  [SMALL_STATE(12)] = 318,
  [SMALL_STATE(13)] = 339,
  [SMALL_STATE(14)] = 368,
  [SMALL_STATE(15)] = 397,
  [SMALL_STATE(16)] = 418,
  [SMALL_STATE(17)] = 438,
  [SMALL_STATE(18)] = 458,
  [SMALL_STATE(19)] = 488,
  [SMALL_STATE(20)] = 506,
  [SMALL_STATE(21)] = 542,
  [SMALL_STATE(22)] = 576,
  [SMALL_STATE(23)] = 596,
  [SMALL_STATE(24)] = 628,
  [SMALL_STATE(25)] = 652,
  [SMALL_STATE(26)] = 678,
  [SMALL_STATE(27)] = 700,
  [SMALL_STATE(28)] = 720,
  [SMALL_STATE(29)] = 740,
  [SMALL_STATE(30)] = 760,
  [SMALL_STATE(31)] = 778,
  [SMALL_STATE(32)] = 795,
  [SMALL_STATE(33)] = 828,
  [SMALL_STATE(34)] = 861,
  [SMALL_STATE(35)] = 881,
  [SMALL_STATE(36)] = 901,
  [SMALL_STATE(37)] = 921,
  [SMALL_STATE(38)] = 941,
  [SMALL_STATE(39)] = 961,
  [SMALL_STATE(40)] = 981,
  [SMALL_STATE(41)] = 1001,
  [SMALL_STATE(42)] = 1021,
  [SMALL_STATE(43)] = 1041,
  [SMALL_STATE(44)] = 1061,
  [SMALL_STATE(45)] = 1071,
  [SMALL_STATE(46)] = 1081,
  [SMALL_STATE(47)] = 1091,
  [SMALL_STATE(48)] = 1096,
  [SMALL_STATE(49)] = 1103,
  [SMALL_STATE(50)] = 1108,
  [SMALL_STATE(51)] = 1115,
  [SMALL_STATE(52)] = 1122,
  [SMALL_STATE(53)] = 1129,
  [SMALL_STATE(54)] = 1136,
  [SMALL_STATE(55)] = 1141,
  [SMALL_STATE(56)] = 1145,
  [SMALL_STATE(57)] = 1149,
  [SMALL_STATE(58)] = 1153,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 3, 0, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [195] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
