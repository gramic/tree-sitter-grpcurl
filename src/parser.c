#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

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
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'g') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(104);
      END_STATE();
    case 4:
      if (lookahead == '3') ADVANCE(63);
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
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 51:
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 52:
      if (eof) ADVANCE(55);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_grpcurl);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_grpc);
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASHproto);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASHproto);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_plaintext);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_plaintext);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_address);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_address);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_list);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_list);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_describe);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_describe);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '3') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '4') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '4') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'x') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(104);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 52},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 54},
  [11] = {.lex_state = 54},
  [12] = {.lex_state = 54},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
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
    [sym_grpcurl] = STATE(13),
    [anon_sym_grpcurl] = ACTIONS(3),
  },
  [2] = {
    [sym_proto] = STATE(6),
    [sym_flag] = STATE(3),
    [aux_sym_grpcurl_repeat1] = STATE(3),
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
    [sym_flag] = STATE(4),
    [aux_sym_grpcurl_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_DASHproto] = ACTIONS(7),
    [sym_plaintext] = ACTIONS(9),
    [sym_address] = ACTIONS(19),
    [sym_list] = ACTIONS(21),
    [sym_describe] = ACTIONS(21),
    [sym_symbol] = ACTIONS(23),
  },
  [4] = {
    [sym_proto] = STATE(6),
    [sym_flag] = STATE(4),
    [aux_sym_grpcurl_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_DASHproto] = ACTIONS(27),
    [sym_plaintext] = ACTIONS(30),
    [sym_address] = ACTIONS(33),
    [sym_list] = ACTIONS(33),
    [sym_describe] = ACTIONS(33),
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
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(21), 2,
      sym_list,
      sym_describe,
  [47] = 3,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_symbol,
    ACTIONS(49), 2,
      sym_list,
      sym_describe,
  [58] = 2,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      sym_symbol,
  [65] = 2,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_symbol,
  [72] = 2,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_symbol,
  [79] = 1,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
  [83] = 1,
    ACTIONS(63), 1,
      sym_path,
  [87] = 1,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
  [91] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
  [95] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
  [99] = 1,
    ACTIONS(65), 1,
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
  [SMALL_STATE(14)] = 83,
  [SMALL_STATE(15)] = 87,
  [SMALL_STATE(16)] = 91,
  [SMALL_STATE(17)] = 95,
  [SMALL_STATE(18)] = 99,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grpcurl, 1),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grpcurl, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grpcurl_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grpcurl_repeat1, 2), SHIFT_REPEAT(14),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grpcurl_repeat1, 2), SHIFT_REPEAT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grpcurl_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 2, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proto, 2, .production_id = 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grpcurl, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grpcurl, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [61] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grpcurl, 5),
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
