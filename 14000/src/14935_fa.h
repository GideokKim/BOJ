#ifndef BOJ_14000_SRC_14935_FA_H_
#define BOJ_14000_SRC_14935_FA_H_

#include <iostream>
#include <string>

class FA {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    int num = (input[0] - '0') * static_cast<int>(input.size());
    while (true) {
      int previous_num = num;
      std::string num_str = std::to_string(num);
      num = (num_str[0] - '0') * static_cast<int>(num_str.size());
      if (num == previous_num) {
        result = "FA";
        return;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  FA fa;
  fa.SetInputs();
  fa.Calculate();
  fa.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14935_FA_H_
