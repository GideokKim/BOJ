#ifndef BOJ_2000_SRC_2557_HELLO_WORLD_H_
#define BOJ_2000_SRC_2557_HELLO_WORLD_H_

#include <iostream>
#include <string>

class HelloWorld {
 public:
  HelloWorld() : hello_world("Hello World!") {}

  void PrintHelloWorld() { std::cout << hello_world; }

  std::string GetHelloWorld() { return hello_world; }

 private:
  std::string hello_world;
};

#ifdef BOJ_SUBMIT
int main() {
  HelloWorld hello_world;
  hello_world.PrintHelloWorld();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2557_HELLO_WORLD_H_
