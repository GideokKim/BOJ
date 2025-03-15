#ifndef BOJ_4000_SRC_4999_AH_H_
#define BOJ_4000_SRC_4999_AH_H_

#include <iostream>
#include <string>

class Ah {
 public:
  void SetInputs() { std::cin >> me >> doctor; }

  void Calculate() {
    if (me.length() >= doctor.length()) {
      result = "go";
    } else {
      result = "no";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string me;
  std::string doctor;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  Ah ah;
  ah.SetInputs();
  ah.Calculate();
  ah.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_4000_SRC_4999_AH_H_
