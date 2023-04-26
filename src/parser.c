#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_grpcurl = 1,
  anon_sym_grpc = 2,
  anon_sym_DASHproto = 3,
  sym_path = 4,
  sym_plaintext = 5,
  sym_address = 6,
  sym_list = 7,
  sym_describe = 8,
  sym_symbol = 9,
  sym_comment = 10,
  sym_grpcurl = 11,
  sym_proto = 12,
  sym_flag = 13,
  aux_sym_grpcurl_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_grpcurl] = "grpcurl",
  [anon_sym_grpc] = "grpc",
  [anon_sym_DASHproto] = "-proto",
  [sym_path] = "path",
  [sym_plaintext] = "plaintext",
  [sym_address] = "address",
  [sym_list] = "list",
  [sym_describe] = "describe",
  [sym_symbol] = "symbol",
  [sym_comment] = "comment",
  [sym_grpcurl] = "grpcurl",
  [sym_proto] = "proto",
  [sym_flag] = "flag",
  [aux_sym_grpcurl_repeat1] = "grpcurl_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_grpcurl] = anon_sym_grpcurl,
  [anon_sym_grpc] = anon_sym_grpc,
  [anon_sym_DASHproto] = anon_sym_DASHproto,
  [sym_path] = sym_path,
  [sym_plaintext] = sym_plaintext,
  [sym_address] = sym_address,
  [sym_list] = sym_list,
  [sym_describe] = sym_describe,
  [sym_symbol] = sym_symbol,
  [sym_comment] = sym_comment,
  [sym_grpcurl] = sym_grpcurl,
  [sym_proto] = sym_proto,
  [sym_flag] = sym_flag,
  [aux_sym_grpcurl_repeat1] = aux_sym_grpcurl_repeat1,
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
  [anon_sym_grpc] = {
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
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_describe] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_grpcurl] = {
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
  [aux_sym_grpcurl_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_address = 1,
  field_path = 2,
  field_plaintext = 3,
  field_proto = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_path] = "path",
  [field_plaintext] = "plaintext",
  [field_proto] = "proto",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_plaintext, 0},
  [1] =
    {field_address, 1},
  [2] =
    {field_path, 1},
    {field_proto, 0},
  [4] =
    {field_address, 2},
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
  [22] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(22);
      if (lookahead == 'g') ADVANCE(40);
      if (lookahead == 'l') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == 'p') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == 't') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(108);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == '5') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '5') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'x') ADVANCE(49);
      END_STATE();
    case 54:
      if (eof) ADVANCE(57);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 55:
      if (eof) ADVANCE(57);
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_grpcurl);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_grpc);
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASHproto);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASHproto);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(7);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_plaintext);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_plaintext);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_address);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_address);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_list);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_list);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_describe);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_describe);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '1') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '5') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '5') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ':') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'p') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'x') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(108);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 54},
  [3] = {.lex_state = 54},
  [4] = {.lex_state = 54},
  [5] = {.lex_state = 54},
  [6] = {.lex_state = 54},
  [7] = {.lex_state = 54},
  [8] = {.lex_state = 55},
  [9] = {.lex_state = 55},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 56},
  [13] = {.lex_state = 56},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_grpcurl] = ACTIONS(1),
    [anon_sym_grpc] = ACTIONS(1),
    [anon_sym_DASHproto] = ACTIONS(1),
    [sym_plaintext] = ACTIONS(1),
    [sym_address] = ACTIONS(1),
    [sym_list] = ACTIONS(1),
    [sym_describe] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_grpcurl] = STATE(15),
    [anon_sym_grpcurl] = ACTIONS(3),
  },
  [2] = {
    [sym_proto] = STATE(6),
    [sym_flag] = STATE(4),
    [aux_sym_grpcurl_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DASHproto] = ACTIONS(7),
    [sym_plaintext] = ACTIONS(9),
    [sym_address] = ACTIONS(11),
    [sym_list] = ACTIONS(13),
    [sym_describe] = ACTIONS(13),
    [sym_symbol] = ACTIONS(15),
  },
  [3] = {
    [sym_proto] = STATE(6),
    [sym_flag] = STATE(3),
    [aux_sym_grpcurl_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_DASHproto] = ACTIONS(19),
    [sym_plaintext] = ACTIONS(22),
    [sym_address] = ACTIONS(25),
    [sym_list] = ACTIONS(25),
    [sym_describe] = ACTIONS(25),
    [sym_symbol] = ACTIONS(25),
  },
  [4] = {
    [sym_proto] = STATE(6),
    [sym_flag] = STATE(3),
    [aux_sym_grpcurl_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_DASHproto] = ACTIONS(7),
    [sym_plaintext] = ACTIONS(9),
    [sym_address] = ACTIONS(29),
    [sym_list] = ACTIONS(31),
    [sym_describe] = ACTIONS(31),
    [sym_symbol] = ACTIONS(33),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 6,
      anon_sym_DASHproto,
      sym_plaintext,
      sym_address,
      sym_list,
      sym_describe,
      sym_symbol,
  [12] = 2,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 6,
      anon_sym_DASHproto,
      sym_plaintext,
      sym_address,
      sym_list,
      sym_describe,
      sym_symbol,
  [24] = 2,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 6,
      anon_sym_DASHproto,
      sym_plaintext,
      sym_address,
      sym_list,
      sym_describe,
      sym_symbol,
  [36] = 3,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_symbol,
    ACTIONS(49), 2,
      sym_list,
      sym_describe,
  [47] = 3,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      sym_symbol,
    ACTIONS(55), 2,
      sym_list,
      sym_describe,
  [58] = 2,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_symbol,
  [65] = 2,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      sym_symbol,
  [72] = 2,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym_symbol,
  [79] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym_symbol,
  [86] = 1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
  [90] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
  [94] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
  [98] = 1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
  [102] = 1,
    ACTIONS(75), 1,
      sym_path,
  [106] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [110] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [114] = 1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
  [118] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 12,
  [SMALL_STATE(7)] = 24,
  [SMALL_STATE(8)] = 36,
  [SMALL_STATE(9)] = 47,
  [SMALL_STATE(10)] = 58,
  [SMALL_STATE(11)] = 65,
  [SMALL_STATE(12)] = 72,
  [SMALL_STATE(13)] = 79,
  [SMALL_STATE(14)] = 86,
  [SMALL_STATE(15)] = 90,
  [SMALL_STATE(16)] = 94,
  [SMALL_STATE(17)] = 98,
  [SMALL_STATE(18)] = 102,
  [SMALL_STATE(19)] = 106,
  [SMALL_STATE(20)] = 110,
  [SMALL_STATE(21)] = 114,
  [SMALL_STATE(22)] = 118,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grpcurl, 1),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grpcurl_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grpcurl_repeat1, 2), SHIFT_REPEAT(18),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grpcurl_repeat1, 2), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grpcurl_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grpcurl, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 2, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proto, 2, .production_id = 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grpcurl, 2, .production_id = 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grpcurl, 3, .production_id = 4),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grpcurl, 3, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grpcurl, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grpcurl, 4, .production_id = 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [73] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grpcurl, 4, .production_id = 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grpcurl, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grpcurl, 5, .production_id = 4),
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
