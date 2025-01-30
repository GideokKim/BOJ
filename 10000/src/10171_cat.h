#ifndef BOJ_10000_SRC_10171_CAT_H_
#define BOJ_10000_SRC_10171_CAT_H_

#include <iostream>

class Cat {
 public:
  void SetInputs() {}

  void Calculate() {}

  void PrintResult() {
    std::cout << R"(\    /\)" << std::endl;
    std::cout << R"( )  ( '))" << std::endl;
    std::cout << R"((  /  ))" << std::endl;
    std::cout << R"( \(__)|)" << std::endl;
  }
};

#ifdef BOJ_SUBMIT
int main() {
  Cat cat;
  cat.SetInputs();
  cat.Calculate();
  cat.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10171_CAT_H_
