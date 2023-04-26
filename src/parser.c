#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_grpcurl = 1,
  anon_sym_DASHproto = 2,
  sym_path = 3,
  sym_plaintext = 4,
  sym_address = 5,
  sym_comment = 6,
  sym_command = 7,
  sym_proto = 8,
  sym_flag = 9,
  aux_sym_command_repeat1 = 10,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_grpcurl] = "grpcurl",
  [anon_sym_DASHproto] = "-proto",
  [sym_path] = "path",
  [sym_plaintext] = "plaintext",
  [sym_address] = "address",
  [sym_comment] = "comment",
  [sym_command] = "command",
  [sym_proto] = "proto",
  [sym_flag] = "flag",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_grpcurl] = anon_sym_grpcurl,
  [anon_sym_DASHproto] = anon_sym_DASHproto,
  [sym_path] = sym_path,
  [sym_plaintext] = sym_plaintext,
  [sym_address] = sym_address,
  [sym_comment] = sym_comment,
  [sym_command] = sym_command,
  [sym_proto] = sym_proto,
  [sym_flag] = sym_flag,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_grpcurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASHproto] = {
    .visible = true,
    .named = false,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_plaintext] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_proto] = {
    .visible = true,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_path = 1,
  field_plaintext = 2,
  field_proto = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_path] = "path",
  [field_plaintext] = "plaintext",
  [field_proto] = "proto",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_plaintext, 0},
  [1] =
    {field_path, 1},
    {field_proto, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'g') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(45);
      END_STATE();
    case 4:
      if (lookahead == '3') ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == '4') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '4') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_grpcurl);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DASHproto);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_plaintext);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_address);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(45);
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
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_grpcurl] = ACTIONS(1),
    [anon_sym_DASHproto] = ACTIONS(1),
    [sym_plaintext] = ACTIONS(1),
    [sym_address] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_command] = STATE(8),
    [anon_sym_grpcurl] = ACTIONS(3),
  },
  [2] = {
    [sym_proto] = STATE(6),
    [sym_flag] = STATE(3),
    [aux_sym_command_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DASHproto] = ACTIONS(7),
    [sym_plaintext] = ACTIONS(9),
    [sym_address] = ACTIONS(11),
  },
  [3] = {
    [sym_proto] = STATE(6),
    [sym_flag] = STATE(4),
    [aux_sym_command_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_DASHproto] = ACTIONS(7),
    [sym_plaintext] = ACTIONS(9),
    [sym_address] = ACTIONS(15),
  },
  [4] = {
    [sym_proto] = STATE(6),
    [sym_flag] = STATE(4),
    [aux_sym_command_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_DASHproto] = ACTIONS(19),
    [sym_plaintext] = ACTIONS(22),
    [sym_address] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      anon_sym_DASHproto,
      sym_plaintext,
      sym_address,
  [7] = 1,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      anon_sym_DASHproto,
      sym_plaintext,
      sym_address,
  [14] = 1,
    ACTIONS(29), 4,
      ts_builtin_sym_end,
      anon_sym_DASHproto,
      sym_plaintext,
      sym_address,
  [21] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [25] = 1,
    ACTIONS(33), 1,
      sym_path,
  [29] = 1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
  [33] = 1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 7,
  [SMALL_STATE(7)] = 14,
  [SMALL_STATE(8)] = 21,
  [SMALL_STATE(9)] = 25,
  [SMALL_STATE(10)] = 29,
  [SMALL_STATE(11)] = 33,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(9),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 2, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_grpcurl(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
