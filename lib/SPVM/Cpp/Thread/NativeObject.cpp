#include "spvm_native.h"

#include <iostream>
#include <thread>

extern "C" {

static const char* FILE_NAME = "Cpp/Thread/NativeObject.cpp";

int32_t SPVM__Cpp__Thread__NativeObject__new(SPVM_ENV* env, SPVM_VALUE* stack) {

  int32_t e;
  
  std::thread* nt_thread = (std::thread*)env->alloc_memory_block_zero(env, sizeof(std::thread));
  
  void* obj_thread = env->new_pointer_by_name(env, stack, "Cpp::Thread", nt_thread, &e, FILE_NAME, __LINE__);
  if (e) { return e; }

  stack[0].oval = obj_thread;

  return 0;
}

int32_t SPVM__Time__Info__DESTROY(SPVM_ENV* env, SPVM_VALUE* stack) {
  
  void* obj_thread = stack[0].oval;
  
  if (obj_thread != NULL) {
    std::thread* nt_thread = (std::thread*)env->get_pointer(env, stack, obj_thread);
    env->free_memory_block(env, nt_thread);
  }
  
  return 0;
}

}
