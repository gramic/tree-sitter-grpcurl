const JSON = require("tree-sitter-json/grammar")

module.exports = grammar({
  name: 'grpcurl',


  // extras: $ => [
  //   /\s/,
  //   $.comment,
  // ],

  rules: {
    // source_file: $ => seq($.command_name,
    grpcurl: $ => seq('grpcurl',
      optional(repeat($.flag)),
      optional(field('address', $.address)),
      optional(choice($.list, $.describe)),
      optional($.symbol),
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

    comment: $ => token(choice(
      seq('//', /.*/),
      // seq(
      //   '/*',
      //   /[^*]*\*+([^/*][^*]*\*+)*/,
      //   '/'
      // )
    )),
  }
});
