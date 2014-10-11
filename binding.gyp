{
  "targets": [
    {
      "target_name": "nsdl2",
      "sources": [ "src/nsdl2.cc" ],
      "dependencies": [
        'sdl2.gyp:SDL2',
      ],
    },


  ],
      "libraries": [ "Release/SDL2.a" ]
}
