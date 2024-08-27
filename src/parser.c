#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 2
#define TOKEN_COUNT 37
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
  anon_sym_EQ = 11,
  anon_sym_true = 12,
  anon_sym_false = 13,
  anon_sym_u8 = 14,
  anon_sym_u16 = 15,
  anon_sym_u32 = 16,
  anon_sym_u64 = 17,
  anon_sym_i8 = 18,
  anon_sym_i16 = 19,
  anon_sym_i32 = 20,
  anon_sym_i64 = 21,
  anon_sym_usize = 22,
  anon_sym_isize = 23,
  anon_sym_bool = 24,
  anon_sym_void = 25,
  anon_sym_SEMI = 26,
  anon_sym_LPAREN = 27,
  anon_sym_COMMA = 28,
  anon_sym_RPAREN = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_return = 32,
  anon_sym_if = 33,
  anon_sym_else = 34,
  sym_identifier = 35,
  sym_integer = 36,
  sym_source_file = 37,
  sym__definition = 38,
  sym__type = 39,
  sym_pointer_type = 40,
  sym__expression = 41,
  sym_binary_expression = 42,
  sym_bool = 43,
  sym__statement = 44,
  sym_primitive_type = 45,
  sym_variable_definition = 46,
  sym_function_definition = 47,
  sym_block = 48,
  sym_return_statement = 49,
  sym_if_statement = 50,
  aux_sym_source_file_repeat1 = 51,
  aux_sym_function_definition_repeat1 = 52,
  aux_sym_block_repeat1 = 53,
  alias_sym_function_name = 54,
  alias_sym_function_parameter = 55,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      ADVANCE_MAP(
        '!', 10,
        '(', 68,
        ')', 70,
        '*', 40,
        '+', 41,
        ',', 69,
        '-', 42,
        '/', 43,
        ';', 67,
        '<', 44,
        '=', 50,
        '>', 45,
        'b', 29,
        'e', 23,
        'f', 11,
        'i', 2,
        'r', 13,
        't', 30,
        'u', 3,
        'v', 28,
        '{', 71,
        '}', 72,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(6);
      if (lookahead == '8') ADVANCE(59);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '8') ADVANCE(55);
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(61);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(57);
      END_STATE();
    case 6:
      if (lookahead == '4') ADVANCE(62);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(58);
      END_STATE();
    case 8:
      if (lookahead == '6') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == '6') ADVANCE(56);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 't') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == 'z') ADVANCE(17);
      END_STATE();
    case 38:
      if (lookahead == 'z') ADVANCE(18);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(78);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(77);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
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
  [30] = {.lex_state = 19},
  [31] = {.lex_state = 19},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 19},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 19},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 19},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
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
    [sym_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(49),
    [sym__definition] = STATE(5),
    [sym__type] = STATE(43),
    [sym_pointer_type] = STATE(43),
    [sym_primitive_type] = STATE(43),
    [sym_variable_definition] = STATE(5),
    [sym_function_definition] = STATE(5),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(20), 1,
      anon_sym_if,
    STATE(42), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(2), 5,
      sym__statement,
      sym_variable_definition,
      sym_return_statement,
      sym_if_statement,
      aux_sym_block_repeat1,
    ACTIONS(12), 12,
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
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_if,
    STATE(42), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(2), 5,
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
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(25), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      anon_sym_if,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(42), 3,
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
  [117] = 5,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(43), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(6), 4,
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
  [149] = 5,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_STAR,
    STATE(43), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    STATE(6), 4,
      sym__definition,
      sym_variable_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
    ACTIONS(38), 12,
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
  [181] = 5,
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_function_definition_repeat1,
    STATE(47), 3,
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
  [210] = 1,
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
  [231] = 1,
    ACTIONS(45), 18,
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
  [252] = 5,
    ACTIONS(47), 1,
      anon_sym_STAR,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_function_definition_repeat1,
    STATE(47), 3,
      sym__type,
      sym_pointer_type,
      sym_primitive_type,
    ACTIONS(50), 12,
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
    ACTIONS(5), 1,
      anon_sym_STAR,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_function_definition_repeat1,
    STATE(47), 3,
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
  [330] = 1,
    ACTIONS(59), 17,
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
  [350] = 2,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(61), 16,
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
  [410] = 2,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(69), 14,
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
  [430] = 1,
    ACTIONS(73), 14,
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
  [447] = 1,
    ACTIONS(75), 14,
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
  [464] = 1,
    ACTIONS(77), 14,
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
  [481] = 5,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(83), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(85), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [505] = 3,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(83), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(85), 8,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [525] = 8,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [555] = 2,
    ACTIONS(99), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(97), 10,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [573] = 7,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(85), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [601] = 4,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(83), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(85), 6,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [623] = 2,
    ACTIONS(83), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_EQ,
    ACTIONS(85), 10,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [641] = 7,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [668] = 7,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(81), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(87), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(89), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [695] = 4,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_integer,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 3,
      sym__expression,
      sym_binary_expression,
      sym_bool,
  [711] = 4,
    ACTIONS(111), 1,
      sym_identifier,
    ACTIONS(113), 1,
      sym_integer,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(28), 3,
      sym__expression,
      sym_binary_expression,
      sym_bool,
  [727] = 4,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(117), 1,
      sym_integer,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(29), 3,
      sym__expression,
      sym_binary_expression,
      sym_bool,
  [743] = 4,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym_integer,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 3,
      sym__expression,
      sym_binary_expression,
      sym_bool,
  [759] = 4,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym_integer,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 3,
      sym__expression,
      sym_binary_expression,
      sym_bool,
  [775] = 4,
    ACTIONS(127), 1,
      sym_identifier,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym__expression,
      sym_binary_expression,
      sym_bool,
  [791] = 4,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(133), 1,
      sym_integer,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 3,
      sym__expression,
      sym_binary_expression,
      sym_bool,
  [807] = 4,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      sym_integer,
    ACTIONS(105), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 3,
      sym__expression,
      sym_binary_expression,
      sym_bool,
  [823] = 3,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_block,
  [833] = 3,
    ACTIONS(141), 1,
      anon_sym_EQ,
    ACTIONS(143), 1,
      anon_sym_SEMI,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
  [843] = 3,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_block,
  [853] = 1,
    ACTIONS(149), 2,
      anon_sym_STAR,
      sym_identifier,
  [858] = 2,
    ACTIONS(151), 1,
      anon_sym_STAR,
    ACTIONS(153), 1,
      sym_identifier,
  [865] = 2,
    ACTIONS(151), 1,
      anon_sym_STAR,
    ACTIONS(155), 1,
      sym_identifier,
  [872] = 1,
    ACTIONS(157), 2,
      anon_sym_STAR,
      sym_identifier,
  [877] = 2,
    ACTIONS(141), 1,
      anon_sym_EQ,
    ACTIONS(143), 1,
      anon_sym_SEMI,
  [884] = 1,
    ACTIONS(159), 2,
      anon_sym_STAR,
      sym_identifier,
  [889] = 2,
    ACTIONS(151), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      sym_identifier,
  [896] = 2,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [903] = 1,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 149,
  [SMALL_STATE(7)] = 181,
  [SMALL_STATE(8)] = 210,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 252,
  [SMALL_STATE(11)] = 281,
  [SMALL_STATE(12)] = 310,
  [SMALL_STATE(13)] = 330,
  [SMALL_STATE(14)] = 350,
  [SMALL_STATE(15)] = 372,
  [SMALL_STATE(16)] = 391,
  [SMALL_STATE(17)] = 410,
  [SMALL_STATE(18)] = 430,
  [SMALL_STATE(19)] = 447,
  [SMALL_STATE(20)] = 464,
  [SMALL_STATE(21)] = 481,
  [SMALL_STATE(22)] = 505,
  [SMALL_STATE(23)] = 525,
  [SMALL_STATE(24)] = 555,
  [SMALL_STATE(25)] = 573,
  [SMALL_STATE(26)] = 601,
  [SMALL_STATE(27)] = 623,
  [SMALL_STATE(28)] = 641,
  [SMALL_STATE(29)] = 668,
  [SMALL_STATE(30)] = 695,
  [SMALL_STATE(31)] = 711,
  [SMALL_STATE(32)] = 727,
  [SMALL_STATE(33)] = 743,
  [SMALL_STATE(34)] = 759,
  [SMALL_STATE(35)] = 775,
  [SMALL_STATE(36)] = 791,
  [SMALL_STATE(37)] = 807,
  [SMALL_STATE(38)] = 823,
  [SMALL_STATE(39)] = 833,
  [SMALL_STATE(40)] = 843,
  [SMALL_STATE(41)] = 853,
  [SMALL_STATE(42)] = 858,
  [SMALL_STATE(43)] = 865,
  [SMALL_STATE(44)] = 872,
  [SMALL_STATE(45)] = 877,
  [SMALL_STATE(46)] = 884,
  [SMALL_STATE(47)] = 889,
  [SMALL_STATE(48)] = 896,
  [SMALL_STATE(49)] = 903,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 5, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 2, 0, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_definition_repeat1, 3, 0, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [163] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
