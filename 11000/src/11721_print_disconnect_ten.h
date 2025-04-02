#ifndef BOJ_11000_SRC_11721_PRINT_DISCONNECT_TEN_H_
#define BOJ_11000_SRC_11721_PRINT_DISCONNECT_TEN_H_

#include <iostream>
#include <string>
#include <vector>

class PrintDisconnectTen {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < input.size(); i += 10) {
      std::cout << input.substr(i, 10) << "\n";
    }
  }

 private:
  std::string input;
};

#ifdef BOJ_SUBMIT
int main() {
  PrintDisconnectTen print_disconnect_ten;
  print_disconnect_ten.SetInputs();
  print_disconnect_ten.Calculate();
  print_disconnect_ten.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11721_PRINT_DISCONNECT_TEN_H_
