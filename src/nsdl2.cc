#include <node.h>
#include <v8.h>
#include "sdl.h"

using namespace v8;


Handle<Value> NumJoysticks(const Arguments& args) {
  HandleScope scope;
  int num = SDL_NumJoysticks();
  return scope.Close(Integer::New(num));
}


void init(Handle<Object> target) {
  NODE_SET_METHOD(target, "numJoysticks", NumJoysticks);
}
NODE_MODULE(nsdl2, init)
