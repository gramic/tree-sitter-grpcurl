module.exports = grammar({
  name: 'grpcurl',


  // extras: $ => [
  //   /\s/,
  //   $.comment,
  // ],

  rules: {
    command: $ => seq('grpcurl',
      optional(repeat($.flag)),
      optional($.address)
    ),

    proto: $ => field('proto', seq(
      token('-proto'), field('path', $.path)
    )),

    flag: $ => choice(
      field('plaintext', $.plaintext),
      $.proto,
    ),

    path: $ => token(/.*.proto/),

    plaintext: $ => token('-plaintext'),

    address: $ => token('localhost:443'),

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
