const JSON = require("tree-sitter-json/grammar")

module.exports = grammar({
  name: 'grpcurl',


  extras: $ => [
    /\s/,
    $.block_comment,
    $.line_comment,
    $.data,
  ],

  rules: {
    source_file: $ => repeat($.grpcurl),

    grpcurl : $ => $.command,

    // grpcurl : $ => seq(
    //   $.command,
    //   optional($.data)
    // ),

    command: $ => seq('grpcurl',
      optional(repeat($.flag)),
      optional(field('address', $.address)),
      optional(choice($.list, $.describe)),
      optional(field('symbol', $.symbol)),
      optional(field('data', $.data)),
      token('\n'),
    ),

    command_name: $ => choice(token('grpcurl'), token('grpc')),

    grpc: $ => token('grpc'),

    proto: $ => field('proto', seq(
      token('-proto'), field('path', $.path)
    )),

    flag: $ => choice(
      field('plaintext', $.plaintext),
      $.proto,
    ),

    path: $ => token(/\S*\.proto/),

    plaintext: $ => token('-plaintext'),

    address: $ => token('localhost:50051'),

    list: $ => token('list'),

    describe: $ => token('describe'),

    symbol: $ => token(/\S+/),

    data: $ => seq(
      "{",
      optional(repeat1(choice(/.|\n|\r/))),
      "}",
    ),

    line_comment: $ => seq(
      "//",
      optional($.line_comment_text),
      "\n"
    ),

    line_comment_text: $ => repeat1(choice(/./)),

    block_comment: $ => seq(
      "/*",
      optional($.comment_text),
      "*/"
    ),

    comment_text: $ => repeat1(choice(/.|\n|\r/)),
  }
});
