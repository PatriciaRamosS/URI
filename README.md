<h1 align="center">URI Online Judge</h1>

<h4 align="center"> 
  
	🚧  React Select 🚀 Em construção...  🚧
</h4>

module.exports = {
  ignore: [
    '**/~*/**',
    '**/_*/**',
    '**/icon/**',
    '**/__tests__/**',
    '**/style/**',
    '**/locale/**',
    '**/*-provider/**',
    '**/*.json',
  ],
  modulePattern: [
    {
      pattern: /ConfigContext.*renderEmpty/ms,
      module: '../empty',
    },
    {
      pattern: /ConfigConsumer.*renderEmpty/ms,
      module: '../empty',
    },
    {
      pattern: /config-provider\/context.*renderEmpty/ms,
      module: '../empty',
    },
  ],
};
