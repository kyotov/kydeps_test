#include <glog/logging.h>

#include "Foo.h"

int main() {
  Foo foo = Foo();
  LOG(INFO) << "Hello, World!" << std::endl;
  return 0;
}
