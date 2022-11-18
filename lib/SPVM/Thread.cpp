#include "spvm_native.h"

extern "C" {

static const char* FILE_NAME = "Thread.cpp";

int32_t SPVM__Thread__foo(SPVM_ENV* env, SPVM_VALUE* stack) {
  (void)env;
  (void)stack;
  
  return 0;
}

}
