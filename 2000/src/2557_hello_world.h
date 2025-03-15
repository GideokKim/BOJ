#ifndef BOJ_2000_SRC_2557_HELLO_WORLD_H_
#define BOJ_2000_SRC_2557_HELLO_WORLD_H_

#include <iostream>

class HelloWorld {
 public:
  void SetInputs() {}

  void Calculate() {}
  void PrintResult() { std::cout << "Hello World!"; }
};

#ifdef BOJ_SUBMIT
int main() {
  HelloWorld hello_world;
  hello_world.SetInputs();
  hello_world.Calculate();
  hello_world.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2557_HELLO_WORLD_H_
