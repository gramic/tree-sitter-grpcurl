#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 80
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 27

enum {
  anon_sym_grpcurl = 1,
  anon_sym_LF = 2,
  anon_sym_grpc = 3,
  anon_sym_DASHproto = 4,
  sym_path = 5,
  sym_plaintext = 6,
  sym_address = 7,
  sym_list = 8,
  sym_describe = 9,
  sym_symbol = 10,
  anon_sym_LBRACE = 11,
  aux_sym_data_token1 = 12,
  anon_sym_RBRACE = 13,
  anon_sym_SLASH_SLASH = 14,
  aux_sym_line_comment_text_token1 = 15,
  anon_sym_SLASH_STAR = 16,
  anon_sym_STAR_SLASH = 17,
  sym_source_file = 18,
  sym_grpcurl = 19,
  sym_command = 20,
  sym_proto = 21,
  sym_flag = 22,
  sym_data = 23,
  sym_line_comment = 24,
  sym_line_comment_text = 25,
  sym_block_comment = 26,
  sym_comment_text = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_command_repeat1 = 29,
  aux_sym_data_repeat1 = 30,
  aux_sym_line_comment_text_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_grpcurl] = "grpcurl",
  [anon_sym_LF] = "\n",
  [anon_sym_grpc] = "grpc",
  [anon_sym_DASHproto] = "-proto",
  [sym_path] = "path",
  [sym_plaintext] = "plaintext",
  [sym_address] = "address",
  [sym_list] = "list",
  [sym_describe] = "describe",
  [sym_symbol] = "symbol",
  [anon_sym_LBRACE] = "{",
  [aux_sym_data_token1] = "data_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_line_comment_text_token1] = "line_comment_text_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_source_file] = "source_file",
  [sym_grpcurl] = "grpcurl",
  [sym_command] = "command",
  [sym_proto] = "proto",
  [sym_flag] = "flag",
  [sym_data] = "data",
  [sym_line_comment] = "line_comment",
  [sym_line_comment_text] = "line_comment_text",
  [sym_block_comment] = "block_comment",
  [sym_comment_text] = "comment_text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_data_repeat1] = "data_repeat1",
  [aux_sym_line_comment_text_repeat1] = "line_comment_text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_grpcurl] = anon_sym_grpcurl,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_grpc] = anon_sym_grpc,
  [anon_sym_DASHproto] = anon_sym_DASHproto,
  [sym_path] = sym_path,
  [sym_plaintext] = sym_plaintext,
  [sym_address] = sym_address,
  [sym_list] = sym_list,
  [sym_describe] = sym_describe,
  [sym_symbol] = sym_symbol,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_data_token1] = aux_sym_data_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_line_comment_text_token1] = aux_sym_line_comment_text_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_source_file] = sym_source_file,
  [sym_grpcurl] = sym_grpcurl,
  [sym_command] = sym_command,
  [sym_proto] = sym_proto,
  [sym_flag] = sym_flag,
  [sym_data] = sym_data,
  [sym_line_comment] = sym_line_comment,
  [sym_line_comment_text] = sym_line_comment_text,
  [sym_block_comment] = sym_block_comment,
  [sym_comment_text] = sym_comment_text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_data_repeat1] = aux_sym_data_repeat1,
  [aux_sym_line_comment_text_repeat1] = aux_sym_line_comment_text_repeat1,
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
  [anon_sym_LF] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_grpcurl] = {
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
  [sym_data] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment_text] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_line_comment_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_address = 1,
  field_data = 2,
  field_data_start = 3,
  field_path = 4,
  field_plaintext = 5,
  field_proto = 6,
  field_symbol = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_data] = "data",
  [field_data_start] = "data_start",
  [field_path] = "path",
  [field_plaintext] = "plaintext",
  [field_proto] = "proto",
  [field_symbol] = "symbol",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 1},
  [10] = {.index = 12, .length = 1},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 3},
  [16] = {.index = 23, .length = 2},
  [17] = {.index = 25, .length = 2},
  [18] = {.index = 27, .length = 2},
  [19] = {.index = 29, .length = 1},
  [20] = {.index = 30, .length = 1},
  [21] = {.index = 31, .length = 3},
  [22] = {.index = 34, .length = 2},
  [23] = {.index = 36, .length = 2},
  [24] = {.index = 38, .length = 3},
  [25] = {.index = 41, .length = 2},
  [26] = {.index = 43, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_data_start, 0},
  [1] =
    {field_plaintext, 0},
  [2] =
    {field_path, 1},
    {field_proto, 0},
  [4] =
    {field_address, 1},
  [5] =
    {field_symbol, 1},
  [6] =
    {field_data, 1},
  [7] =
    {field_address, 1},
    {field_symbol, 2},
  [9] =
    {field_address, 1},
    {field_data, 2},
  [11] =
    {field_symbol, 2},
  [12] =
    {field_data, 2},
  [13] =
    {field_data, 2},
    {field_symbol, 1},
  [15] =
    {field_address, 2},
  [16] =
    {field_address, 1},
    {field_symbol, 3},
  [18] =
    {field_address, 1},
    {field_data, 3},
  [20] =
    {field_address, 1},
    {field_data, 3},
    {field_symbol, 2},
  [23] =
    {field_data, 3},
    {field_symbol, 2},
  [25] =
    {field_address, 2},
    {field_symbol, 3},
  [27] =
    {field_address, 2},
    {field_data, 3},
  [29] =
    {field_symbol, 3},
  [30] =
    {field_data, 3},
  [31] =
    {field_address, 1},
    {field_data, 4},
    {field_symbol, 3},
  [34] =
    {field_address, 2},
    {field_symbol, 4},
  [36] =
    {field_address, 2},
    {field_data, 4},
  [38] =
    {field_address, 2},
    {field_data, 4},
    {field_symbol, 3},
  [41] =
    {field_data, 4},
    {field_symbol, 3},
  [43] =
    {field_address, 2},
    {field_data, 5},
    {field_symbol, 4},
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
  [20] = 15,
  [21] = 21,
  [22] = 21,
  [23] = 18,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 29,
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 70,
  [76] = 76,
  [77] = 77,
  [78] = 71,
  [79] = 79,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '-') ADVANCE(43);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'g') ADVANCE(46);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == '{') ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(116);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '/') ADVANCE(126);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(133);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(135);
      END_STATE();
    case 16:
      if (lookahead == '0') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == '0') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == '5') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '5') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 32:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 59:
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 60:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 61:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'g') ADVANCE(49);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_grpcurl);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_grpc);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASHproto);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASHproto);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_path);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_plaintext);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_plaintext);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_address);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_address);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_list);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_list);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_describe);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_describe);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '*') ADVANCE(134);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '0') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '1') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '5') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '5') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'x') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_data_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '/') ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '/') ADVANCE(135);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead == '*') ADVANCE(122);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_data_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(124);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_line_comment_text_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_line_comment_text_token1);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_line_comment_text_token1);
      if (lookahead == '*') ADVANCE(132);
      if (lookahead == '/') ADVANCE(126);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(14);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(116);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 62},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 62},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 60},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 61},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 61},
  [19] = {.lex_state = 60},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 60},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 62},
  [25] = {.lex_state = 62},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 62},
  [28] = {.lex_state = 62},
  [29] = {.lex_state = 61},
  [30] = {.lex_state = 62},
  [31] = {.lex_state = 60},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 62},
  [34] = {.lex_state = 62},
  [35] = {.lex_state = 62},
  [36] = {.lex_state = 62},
  [37] = {.lex_state = 62},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 62},
  [40] = {.lex_state = 62},
  [41] = {.lex_state = 62},
  [42] = {.lex_state = 62},
  [43] = {.lex_state = 62},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 62},
  [46] = {.lex_state = 62},
  [47] = {.lex_state = 62},
  [48] = {.lex_state = 62},
  [49] = {.lex_state = 62},
  [50] = {.lex_state = 62},
  [51] = {.lex_state = 62},
  [52] = {.lex_state = 62},
  [53] = {.lex_state = 62},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 62},
  [56] = {.lex_state = 62},
  [57] = {.lex_state = 62},
  [58] = {.lex_state = 62},
  [59] = {.lex_state = 62},
  [60] = {.lex_state = 62},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 2},
  [74] = {(TSStateId)(-1)},
  [75] = {(TSStateId)(-1)},
  [76] = {(TSStateId)(-1)},
  [77] = {(TSStateId)(-1)},
  [78] = {(TSStateId)(-1)},
  [79] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_data] = STATE(0),
    [sym_line_comment] = STATE(0),
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_grpcurl] = ACTIONS(1),
    [anon_sym_grpc] = ACTIONS(1),
    [anon_sym_DASHproto] = ACTIONS(1),
    [sym_plaintext] = ACTIONS(1),
    [sym_address] = ACTIONS(1),
    [sym_list] = ACTIONS(1),
    [sym_describe] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(65),
    [sym_grpcurl] = STATE(27),
    [sym_command] = STATE(28),
    [sym_data] = STATE(1),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_grpcurl] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(15), 1,
      anon_sym_DASHproto,
    ACTIONS(17), 1,
      sym_plaintext,
    ACTIONS(19), 1,
      sym_address,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    STATE(4), 1,
      aux_sym_command_repeat1,
    STATE(7), 1,
      sym_proto,
    STATE(8), 1,
      sym_flag,
    ACTIONS(21), 2,
      sym_list,
      sym_describe,
    STATE(2), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [43] = 13,
    ACTIONS(15), 1,
      anon_sym_DASHproto,
    ACTIONS(17), 1,
      sym_plaintext,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(31), 1,
      anon_sym_LF,
    ACTIONS(33), 1,
      sym_address,
    ACTIONS(37), 1,
      sym_symbol,
    STATE(2), 1,
      aux_sym_command_repeat1,
    STATE(7), 1,
      sym_proto,
    STATE(8), 1,
      sym_flag,
    ACTIONS(35), 2,
      sym_list,
      sym_describe,
    STATE(3), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [86] = 9,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(39), 1,
      anon_sym_LF,
    ACTIONS(41), 1,
      anon_sym_DASHproto,
    ACTIONS(44), 1,
      sym_plaintext,
    STATE(7), 1,
      sym_proto,
    STATE(8), 1,
      sym_flag,
    STATE(4), 4,
      sym_data,
      sym_line_comment,
      sym_block_comment,
      aux_sym_command_repeat1,
    ACTIONS(47), 5,
      sym_address,
      sym_list,
      sym_describe,
      sym_symbol,
      anon_sym_LBRACE,
  [121] = 5,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(49), 1,
      anon_sym_LF,
    STATE(5), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(51), 7,
      anon_sym_DASHproto,
      sym_plaintext,
      sym_address,
      sym_list,
      sym_describe,
      sym_symbol,
      anon_sym_LBRACE,
  [145] = 5,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(53), 1,
      anon_sym_LF,
    STATE(6), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(55), 7,
      anon_sym_DASHproto,
      sym_plaintext,
      sym_address,
      sym_list,
      sym_describe,
      sym_symbol,
      anon_sym_LBRACE,
  [169] = 5,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(57), 1,
      anon_sym_LF,
    STATE(7), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 7,
      anon_sym_DASHproto,
      sym_plaintext,
      sym_address,
      sym_list,
      sym_describe,
      sym_symbol,
      anon_sym_LBRACE,
  [193] = 5,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(61), 1,
      anon_sym_LF,
    STATE(8), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(63), 7,
      anon_sym_DASHproto,
      sym_plaintext,
      sym_address,
      sym_list,
      sym_describe,
      sym_symbol,
      anon_sym_LBRACE,
  [217] = 9,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_grpcurl,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    STATE(27), 1,
      sym_grpcurl,
    STATE(28), 1,
      sym_command,
    STATE(9), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [247] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_grpcurl,
    STATE(27), 1,
      sym_grpcurl,
    STATE(28), 1,
      sym_command,
    STATE(10), 4,
      sym_data,
      sym_line_comment,
      sym_block_comment,
      aux_sym_source_file_repeat1,
  [275] = 7,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(72), 1,
      anon_sym_LF,
    ACTIONS(76), 1,
      sym_symbol,
    ACTIONS(74), 2,
      sym_list,
      sym_describe,
    STATE(11), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [300] = 8,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(78), 1,
      anon_sym_LF,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      aux_sym_line_comment_text_token1,
    STATE(16), 1,
      aux_sym_line_comment_text_repeat1,
    STATE(73), 1,
      sym_line_comment_text,
    STATE(12), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [327] = 8,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      aux_sym_data_token1,
    ACTIONS(86), 1,
      anon_sym_STAR_SLASH,
    STATE(19), 1,
      aux_sym_data_repeat1,
    STATE(72), 1,
      sym_comment_text,
    STATE(13), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [354] = 7,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(88), 1,
      anon_sym_LF,
    ACTIONS(92), 1,
      sym_symbol,
    ACTIONS(90), 2,
      sym_list,
      sym_describe,
    STATE(14), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [379] = 7,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      aux_sym_data_token1,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_data_repeat1,
    STATE(15), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [403] = 7,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(82), 1,
      aux_sym_line_comment_text_token1,
    ACTIONS(98), 1,
      anon_sym_LF,
    STATE(17), 1,
      aux_sym_line_comment_text_repeat1,
    STATE(16), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [427] = 6,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      aux_sym_line_comment_text_token1,
    STATE(17), 4,
      sym_data,
      sym_line_comment,
      sym_block_comment,
      aux_sym_line_comment_text_repeat1,
  [449] = 7,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      aux_sym_data_token1,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_data_repeat1,
    STATE(18), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [473] = 7,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      aux_sym_data_token1,
    ACTIONS(107), 1,
      anon_sym_STAR_SLASH,
    STATE(22), 1,
      aux_sym_data_repeat1,
    STATE(19), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [497] = 7,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      aux_sym_data_token1,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(21), 1,
      aux_sym_data_repeat1,
    STATE(20), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [521] = 6,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      aux_sym_data_token1,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(21), 4,
      sym_data,
      sym_line_comment,
      sym_block_comment,
      aux_sym_data_repeat1,
  [543] = 6,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(116), 1,
      aux_sym_data_token1,
    STATE(22), 4,
      sym_data,
      sym_line_comment,
      sym_block_comment,
      aux_sym_data_repeat1,
  [565] = 7,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      aux_sym_data_token1,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      aux_sym_data_repeat1,
    STATE(23), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [589] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(24), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [608] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(25), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [627] = 5,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 2,
      anon_sym_LF,
      aux_sym_line_comment_text_token1,
    STATE(26), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [646] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(27), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [665] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(28), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [684] = 5,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 2,
      aux_sym_data_token1,
      anon_sym_RBRACE,
    STATE(29), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [703] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(30), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [722] = 5,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(131), 2,
      aux_sym_data_token1,
      anon_sym_STAR_SLASH,
    STATE(31), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [741] = 6,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(23), 1,
      sym_symbol,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [762] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(33), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [781] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(34), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [800] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(35), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [819] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(36), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [838] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(37), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [857] = 6,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(145), 1,
      anon_sym_LF,
    ACTIONS(147), 1,
      sym_symbol,
    STATE(38), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [878] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(39), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [897] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(40), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [916] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(41), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [935] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(42), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [954] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(43), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [973] = 6,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(159), 1,
      anon_sym_LF,
    ACTIONS(161), 1,
      sym_symbol,
    STATE(44), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [994] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(45), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1013] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(46), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1032] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(47), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1051] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(48), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1070] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(49), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1089] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(50), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1108] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(51), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1127] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(52), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1146] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(53), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1165] = 6,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(181), 1,
      anon_sym_LF,
    ACTIONS(183), 1,
      sym_symbol,
    STATE(54), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1186] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(55), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1205] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(187), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(56), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1224] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(57), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1243] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(58), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1262] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(59), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1281] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      anon_sym_grpcurl,
    STATE(60), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1300] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(197), 1,
      anon_sym_LF,
    STATE(61), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1318] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      anon_sym_LF,
    STATE(62), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1336] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      anon_sym_LF,
    STATE(63), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1354] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(203), 1,
      anon_sym_LF,
    STATE(64), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1372] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(65), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1390] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(207), 1,
      anon_sym_LF,
    STATE(66), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1408] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 1,
      anon_sym_LF,
    STATE(67), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1426] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      anon_sym_LF,
    STATE(68), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1444] = 5,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(213), 1,
      sym_path,
    STATE(69), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1462] = 5,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_LF,
    STATE(70), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1480] = 5,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_LF,
    STATE(71), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1498] = 5,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_STAR_SLASH,
    STATE(72), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1516] = 5,
    ACTIONS(27), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 1,
      anon_sym_LF,
    STATE(73), 3,
      sym_data,
      sym_line_comment,
      sym_block_comment,
  [1534] = 1,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [1538] = 1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
  [1542] = 1,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
  [1546] = 1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
  [1550] = 1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
  [1554] = 1,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 121,
  [SMALL_STATE(6)] = 145,
  [SMALL_STATE(7)] = 169,
  [SMALL_STATE(8)] = 193,
  [SMALL_STATE(9)] = 217,
  [SMALL_STATE(10)] = 247,
  [SMALL_STATE(11)] = 275,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 327,
  [SMALL_STATE(14)] = 354,
  [SMALL_STATE(15)] = 379,
  [SMALL_STATE(16)] = 403,
  [SMALL_STATE(17)] = 427,
  [SMALL_STATE(18)] = 449,
  [SMALL_STATE(19)] = 473,
  [SMALL_STATE(20)] = 497,
  [SMALL_STATE(21)] = 521,
  [SMALL_STATE(22)] = 543,
  [SMALL_STATE(23)] = 565,
  [SMALL_STATE(24)] = 589,
  [SMALL_STATE(25)] = 608,
  [SMALL_STATE(26)] = 627,
  [SMALL_STATE(27)] = 646,
  [SMALL_STATE(28)] = 665,
  [SMALL_STATE(29)] = 684,
  [SMALL_STATE(30)] = 703,
  [SMALL_STATE(31)] = 722,
  [SMALL_STATE(32)] = 741,
  [SMALL_STATE(33)] = 762,
  [SMALL_STATE(34)] = 781,
  [SMALL_STATE(35)] = 800,
  [SMALL_STATE(36)] = 819,
  [SMALL_STATE(37)] = 838,
  [SMALL_STATE(38)] = 857,
  [SMALL_STATE(39)] = 878,
  [SMALL_STATE(40)] = 897,
  [SMALL_STATE(41)] = 916,
  [SMALL_STATE(42)] = 935,
  [SMALL_STATE(43)] = 954,
  [SMALL_STATE(44)] = 973,
  [SMALL_STATE(45)] = 994,
  [SMALL_STATE(46)] = 1013,
  [SMALL_STATE(47)] = 1032,
  [SMALL_STATE(48)] = 1051,
  [SMALL_STATE(49)] = 1070,
  [SMALL_STATE(50)] = 1089,
  [SMALL_STATE(51)] = 1108,
  [SMALL_STATE(52)] = 1127,
  [SMALL_STATE(53)] = 1146,
  [SMALL_STATE(54)] = 1165,
  [SMALL_STATE(55)] = 1186,
  [SMALL_STATE(56)] = 1205,
  [SMALL_STATE(57)] = 1224,
  [SMALL_STATE(58)] = 1243,
  [SMALL_STATE(59)] = 1262,
  [SMALL_STATE(60)] = 1281,
  [SMALL_STATE(61)] = 1300,
  [SMALL_STATE(62)] = 1318,
  [SMALL_STATE(63)] = 1336,
  [SMALL_STATE(64)] = 1354,
  [SMALL_STATE(65)] = 1372,
  [SMALL_STATE(66)] = 1390,
  [SMALL_STATE(67)] = 1408,
  [SMALL_STATE(68)] = 1426,
  [SMALL_STATE(69)] = 1444,
  [SMALL_STATE(70)] = 1462,
  [SMALL_STATE(71)] = 1480,
  [SMALL_STATE(72)] = 1498,
  [SMALL_STATE(73)] = 1516,
  [SMALL_STATE(74)] = 1534,
  [SMALL_STATE(75)] = 1538,
  [SMALL_STATE(76)] = 1542,
  [SMALL_STATE(77)] = 1546,
  [SMALL_STATE(78)] = 1550,
  [SMALL_STATE(79)] = 1554,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(69),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(6),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 2, .production_id = 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proto, 2, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1, .production_id = 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment_text, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_comment_text_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_line_comment_text_repeat1, 2), SHIFT_REPEAT(26),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_text, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(29),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 2), SHIFT_REPEAT(31),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 10),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_line_comment_text_repeat1, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grpcurl, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_repeat1, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 7, .production_id = 26),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6, .production_id = 25),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6, .production_id = 24),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6, .production_id = 23),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6, .production_id = 22),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 6, .production_id = 21),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, .production_id = 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 20),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 19),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 18),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 7),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 8),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 9),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 17),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 11),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 12),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 12),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 16),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 13),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 14),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, .production_id = 15),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [205] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 2, .production_id = 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data, 3, .production_id = 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
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
