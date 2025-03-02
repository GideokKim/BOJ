#ifndef BOJ_25000_SRC_25883_SPROUT_H_
#define BOJ_25000_SRC_25883_SPROUT_H_

#include <iostream>

class Sprout {
 public:
  void SetInputs() {}

  void Calculate() {}

  void PrintResult() {
    std::cout << R"(         ,r'"7)" << std::endl;
    std::cout << R"(r`-_   ,'  ,/)" << std::endl;
    std::cout << R"( \. ". L_r')" << std::endl;
    std::cout << R"(   `~\/)" << std::endl;
    std::cout << R"(      |)" << std::endl;
    std::cout << R"(      |)" << std::endl;
  }
};

#ifdef BOJ_SUBMIT
int main() {
  Sprout sprout;
  sprout.SetInputs();
  sprout.Calculate();
  sprout.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25883_SPROUT_H_
