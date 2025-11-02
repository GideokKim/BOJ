#ifndef BOJ_10000_SRC_10821_NUMBER_OF_INTEGER_H_
#define BOJ_10000_SRC_10821_NUMBER_OF_INTEGER_H_

#include <iostream>
#include <string>

class NumberOfInteger {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    result = 1;
    for (size_t i = 0; i < input.size(); ++i) {
      if (input[i] == ',') {
        ++result;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  NumberOfInteger number_of_integer;
  number_of_integer.SetInputs();
  number_of_integer.Calculate();
  number_of_integer.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10821_NUMBER_OF_INTEGER_H_
