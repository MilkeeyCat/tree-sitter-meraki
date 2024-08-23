#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_STAR = 1,
  anon_sym_u8 = 2,
  anon_sym_u16 = 3,
  anon_sym_u32 = 4,
  anon_sym_u64 = 5,
  anon_sym_i8 = 6,
  anon_sym_i16 = 7,
  anon_sym_i32 = 8,
  anon_sym_i64 = 9,
  anon_sym_usize = 10,
  anon_sym_isize = 11,
  anon_sym_bool = 12,
  anon_sym_void = 13,
  anon_sym_SEMI = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_LBRACE = 17,
  anon_sym_RBRACE = 18,
  anon_sym_return = 19,
  sym_identifier = 20,
  sym_integer_literal = 21,
  sym_source_file = 22,
  sym__definition = 23,
  sym__type = 24,
  sym_pointer_type = 25,
  sym__expression = 26,
  sym__statement = 27,
  sym_primitive_type = 28,
  sym_variable_definition = 29,
  sym_function_definition = 30,
  sym_block = 31,
  sym_return_statement = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_block_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_STAR] = "*",
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
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [sym_identifier] = "identifier",
  [sym_integer_literal] = "integer_literal",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__type] = "_type",
  [sym_pointer_type] = "pointer_type",
  [sym__expression] = "_expression",
  [sym__statement] = "_statement",
  [sym_primitive_type] = "primitive_type",
  [sym_variable_definition] = "variable_definition",
  [sym_function_definition] = "function_definition",
  [sym_block] = "block",
  [sym_return_statement] = "return_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_STAR] = anon_sym_STAR,
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
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [sym_identifier] = sym_identifier,
  [sym_integer_literal] = sym_integer_literal,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__type] = sym__type,
  [sym_pointer_type] = sym_pointer_type,
  [sym__expression] = sym__expression,
  [sym__statement] = sym__statement,
  [sym_primitive_type] = sym_primitive_type,
  [sym_variable_definition] = sym_variable_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_block] = sym_block,
  [sym_return_statement] = sym_return_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '(', 42,
        ')', 43,
        '*', 28,
        ';', 41,
        'b', 21,
        'i', 2,
        'r', 11,
        'u', 3,
        'v', 20,
        '{', 44,
        '}', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 2:
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(4);
      if (lookahead == '6') ADVANCE(6);
      if (lookahead == '8') ADVANCE(33);
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(7);
      if (lookahead == '8') ADVANCE(29);
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == '2') ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == '4') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '4') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '6') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == '6') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'z') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 'z') ADVANCE(13);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
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
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
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
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(19),
    [sym__definition] = STATE(2),
    [sym__type] = STATE(12),
    [sym_pointer_type] = STATE(12),
    [sym_primitive_type] = STATE(12),
    [sym_variable_definition] = STATE(2),
    [sym_function_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
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
  [2] = {
    [sym__definition] = STATE(3),
    [sym__type] = STATE(12),
    [sym_pointer_type] = STATE(12),
    [sym_primitive_type] = STATE(12),
    [sym_variable_definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
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
  [3] = {
    [sym__definition] = STATE(3),
    [sym__type] = STATE(12),
    [sym_pointer_type] = STATE(12),
    [sym_primitive_type] = STATE(12),
    [sym_variable_definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_u8] = ACTIONS(16),
    [anon_sym_u16] = ACTIONS(16),
    [anon_sym_u32] = ACTIONS(16),
    [anon_sym_u64] = ACTIONS(16),
    [anon_sym_i8] = ACTIONS(16),
    [anon_sym_i16] = ACTIONS(16),
    [anon_sym_i32] = ACTIONS(16),
    [anon_sym_i64] = ACTIONS(16),
    [anon_sym_usize] = ACTIONS(16),
    [anon_sym_isize] = ACTIONS(16),
    [anon_sym_bool] = ACTIONS(16),
    [anon_sym_void] = ACTIONS(16),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(19), 14,
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
  [17] = 1,
    ACTIONS(21), 14,
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
  [34] = 1,
    ACTIONS(23), 14,
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
  [51] = 1,
    ACTIONS(25), 14,
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
  [68] = 3,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_return,
    STATE(9), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [80] = 3,
    ACTIONS(29), 1,
      anon_sym_return,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(10), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [92] = 3,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_return,
    STATE(10), 3,
      sym__statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [104] = 2,
    STATE(21), 1,
      sym__expression,
    ACTIONS(38), 2,
      sym_identifier,
      sym_integer_literal,
  [112] = 2,
    ACTIONS(40), 1,
      anon_sym_STAR,
    ACTIONS(42), 1,
      sym_identifier,
  [119] = 1,
    ACTIONS(44), 2,
      anon_sym_STAR,
      sym_identifier,
  [124] = 2,
    ACTIONS(46), 1,
      anon_sym_SEMI,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
  [131] = 1,
    ACTIONS(50), 2,
      anon_sym_STAR,
      sym_identifier,
  [136] = 2,
    ACTIONS(52), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_block,
  [143] = 1,
    ACTIONS(54), 2,
      anon_sym_STAR,
      sym_identifier,
  [148] = 1,
    ACTIONS(56), 2,
      anon_sym_RBRACE,
      anon_sym_return,
  [153] = 1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
  [157] = 1,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
  [161] = 1,
    ACTIONS(62), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 17,
  [SMALL_STATE(6)] = 34,
  [SMALL_STATE(7)] = 51,
  [SMALL_STATE(8)] = 68,
  [SMALL_STATE(9)] = 80,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 104,
  [SMALL_STATE(12)] = 112,
  [SMALL_STATE(13)] = 119,
  [SMALL_STATE(14)] = 124,
  [SMALL_STATE(15)] = 131,
  [SMALL_STATE(16)] = 136,
  [SMALL_STATE(17)] = 143,
  [SMALL_STATE(18)] = 148,
  [SMALL_STATE(19)] = 153,
  [SMALL_STATE(20)] = 157,
  [SMALL_STATE(21)] = 161,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
