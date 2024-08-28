#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 2
#define TOKEN_COUNT 41
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
  anon_sym_DQUOTE = 37,
  aux_sym_string_literal_token1 = 38,
  sym_identifier = 39,
  sym_integer = 40,
  sym_source_file = 41,
  sym__definition = 42,
  sym__type = 43,
  sym_pointer_type = 44,
  sym__expression = 45,
  sym_binary_expression = 46,
  sym_bool = 47,
  sym__statement = 48,
  sym_primitive_type = 49,
  sym_variable_definition = 50,
  sym_function_definition = 51,
  sym_block = 52,
  sym_return_statement = 53,
  sym_if_statement = 54,
  sym_string_literal = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_function_definition_repeat1 = 57,
  aux_sym_block_repeat1 = 58,
  alias_sym_function_name = 59,
  alias_sym_function_parameter = 60,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      ADVANCE_MAP(
        '!', 12,
        '"', 81,
        '&', 2,
        '(', 73,
        ')', 75,
        '*', 43,
        '+', 44,
        ',', 74,
        '-', 45,
        '/', 46,
        ';', 72,
        '<', 47,
        '=', 55,
        '>', 48,
        'b', 30,
        'e', 24,
        'f', 13,
        'i', 4,
        'r', 15,
        't', 31,
        'u', 5,
        'v', 29,
        '{', 76,
        '|', 40,
        '}', 77,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(84);
      if (lookahead == 't') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 2:
      if (lookahead == '&') ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(8);
      if (lookahead == '8') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(79);
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(60);
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(66);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(67);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(65);
      END_STATE();
    case 11:
      if (lookahead == '6') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 38:
      if (lookahead == 'z') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'z') ADVANCE(20);
      END_STATE();
    case 40:
      if (lookahead == '|') ADVANCE(53);
      END_STATE();
    case 41:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(83);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
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
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 41},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(56),
    [sym__definition] = STATE(6),
    [sym__type] = STATE(51),
    [sym_pointer_type] = STATE(51),
    [sym_primitive_type] = STATE(51),
    [sym_variable_definition] = STATE(6),
    [sym_function_definition] = STATE(6),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(13), 1,
      anon_sym_if,
    STATE(46), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(3), 5,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
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
  [39] = 7,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(11), 1,
      anon_sym_return,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(46), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(4), 5,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
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
  [78] = 7,
    ACTIONS(17), 1,
      anon_sym_STAR,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(28), 1,
      anon_sym_if,
    STATE(46), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(4), 5,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
    ACTIONS(20), 12,
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
  [117] = 5,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_STAR,
    STATE(51), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(5), 4,
      sym__definition,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(36), 12,
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
  [149] = 5,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(51), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(5), 4,
      sym__definition,
      sym_variable_definition,
      sym_function_definition,
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
  [181] = 1,
    ACTIONS(41), 18,
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
  [202] = 1,
    ACTIONS(43), 18,
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
  [223] = 5,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_function_definition_repeat1,
    STATE(49), 3,
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
  [252] = 5,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_function_definition_repeat1,
    STATE(49), 3,
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
  [281] = 5,
    ACTIONS(49), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_function_definition_repeat1,
    STATE(49), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(52), 12,
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
  [310] = 1,
    ACTIONS(57), 17,
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
  [330] = 2,
    ACTIONS(61), 1,
      anon_sym_else,
    ACTIONS(59), 16,
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
  [352] = 1,
    ACTIONS(63), 17,
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
  [372] = 1,
    ACTIONS(65), 16,
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
  [391] = 1,
    ACTIONS(67), 16,
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
  [410] = 10,
    ACTIONS(79), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(81), 1,
      anon_sym_AMP_AMP,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_block,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(77), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [446] = 2,
    ACTIONS(89), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(87), 12,
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
  [466] = 9,
    ACTIONS(79), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(81), 1,
      anon_sym_AMP_AMP,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(77), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(91), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [500] = 7,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(77), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(91), 4,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [530] = 8,
    ACTIONS(81), 1,
      anon_sym_AMP_AMP,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(77), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(91), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [562] = 4,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(91), 8,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [586] = 5,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(91), 6,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [612] = 3,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(91), 10,
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
  [634] = 2,
    ACTIONS(93), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(91), 12,
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
  [654] = 2,
    ACTIONS(97), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(95), 12,
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
  [674] = 2,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(99), 14,
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
  [694] = 9,
    ACTIONS(79), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(81), 1,
      anon_sym_AMP_AMP,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(77), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [727] = 1,
    ACTIONS(105), 14,
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
  [744] = 1,
    ACTIONS(107), 14,
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
  [761] = 9,
    ACTIONS(79), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(81), 1,
      anon_sym_AMP_AMP,
    ACTIONS(83), 1,
      anon_sym_EQ,
    ACTIONS(109), 1,
      anon_sym_SEMI,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(77), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [794] = 1,
    ACTIONS(111), 14,
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
  [811] = 5,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [831] = 5,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym_integer,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(20), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [851] = 5,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      sym_identifier,
    ACTIONS(127), 1,
      sym_integer,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [871] = 5,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      sym_identifier,
    ACTIONS(131), 1,
      sym_integer,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [891] = 5,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(135), 1,
      sym_integer,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [911] = 5,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym_identifier,
    ACTIONS(139), 1,
      sym_integer,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [931] = 5,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      sym_identifier,
    ACTIONS(143), 1,
      sym_integer,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [951] = 5,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      sym_integer,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [971] = 5,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym_identifier,
    ACTIONS(151), 1,
      sym_integer,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [991] = 5,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym_integer,
    ACTIONS(113), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 4,
      sym__expression,
      sym_binary_expression,
      sym_bool,
      sym_string_literal,
  [1011] = 3,
    ACTIONS(157), 1,
      anon_sym_EQ,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
  [1021] = 3,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym_block,
  [1031] = 3,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(165), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      sym_block,
  [1041] = 2,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(169), 1,
      sym_identifier,
  [1048] = 1,
    ACTIONS(171), 2,
      anon_sym_STAR,
      sym_identifier,
  [1053] = 2,
    ACTIONS(157), 1,
      anon_sym_EQ,
    ACTIONS(159), 1,
      anon_sym_SEMI,
  [1060] = 2,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(173), 1,
      sym_identifier,
  [1067] = 1,
    ACTIONS(175), 2,
      anon_sym_STAR,
      sym_identifier,
  [1072] = 2,
    ACTIONS(167), 1,
      anon_sym_STAR,
    ACTIONS(177), 1,
      sym_identifier,
  [1079] = 2,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [1086] = 1,
    ACTIONS(179), 2,
      anon_sym_STAR,
      sym_identifier,
  [1091] = 1,
    ACTIONS(181), 1,
      aux_sym_string_literal_token1,
  [1095] = 1,
    ACTIONS(183), 1,
      anon_sym_DQUOTE,
  [1099] = 1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 149,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 202,
  [SMALL_STATE(9)] = 223,
  [SMALL_STATE(10)] = 252,
  [SMALL_STATE(11)] = 281,
  [SMALL_STATE(12)] = 310,
  [SMALL_STATE(13)] = 330,
  [SMALL_STATE(14)] = 352,
  [SMALL_STATE(15)] = 372,
  [SMALL_STATE(16)] = 391,
  [SMALL_STATE(17)] = 410,
  [SMALL_STATE(18)] = 446,
  [SMALL_STATE(19)] = 466,
  [SMALL_STATE(20)] = 500,
  [SMALL_STATE(21)] = 530,
  [SMALL_STATE(22)] = 562,
  [SMALL_STATE(23)] = 586,
  [SMALL_STATE(24)] = 612,
  [SMALL_STATE(25)] = 634,
  [SMALL_STATE(26)] = 654,
  [SMALL_STATE(27)] = 674,
  [SMALL_STATE(28)] = 694,
  [SMALL_STATE(29)] = 727,
  [SMALL_STATE(30)] = 744,
  [SMALL_STATE(31)] = 761,
  [SMALL_STATE(32)] = 794,
  [SMALL_STATE(33)] = 811,
  [SMALL_STATE(34)] = 831,
  [SMALL_STATE(35)] = 851,
  [SMALL_STATE(36)] = 871,
  [SMALL_STATE(37)] = 891,
  [SMALL_STATE(38)] = 911,
  [SMALL_STATE(39)] = 931,
  [SMALL_STATE(40)] = 951,
  [SMALL_STATE(41)] = 971,
  [SMALL_STATE(42)] = 991,
  [SMALL_STATE(43)] = 1011,
  [SMALL_STATE(44)] = 1021,
  [SMALL_STATE(45)] = 1031,
  [SMALL_STATE(46)] = 1041,
  [SMALL_STATE(47)] = 1048,
  [SMALL_STATE(48)] = 1053,
  [SMALL_STATE(49)] = 1060,
  [SMALL_STATE(50)] = 1067,
  [SMALL_STATE(51)] = 1072,
  [SMALL_STATE(52)] = 1079,
  [SMALL_STATE(53)] = 1086,
  [SMALL_STATE(54)] = 1091,
  [SMALL_STATE(55)] = 1095,
  [SMALL_STATE(56)] = 1099,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 3, 0, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [185] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
