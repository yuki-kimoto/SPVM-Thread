#include "spvm_native.h"

#include <iostream>
#include <thread>

void
do_worker1 () {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
}

extern "C" {

static const char* FILE_NAME = "Thread.cpp";

int32_t SPVM__Cpp__Thread__test(SPVM_ENV* env, SPVM_VALUE* stack) {
  (void)env;
  (void)stack;
  
  std::thread t1(do_worker1);
  t1.join();
                
  return 0;
}

}
