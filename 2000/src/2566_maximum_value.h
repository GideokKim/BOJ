#ifndef BOJ_2000_SRC_2566_MAXIMUM_VALUE_H_
#define BOJ_2000_SRC_2566_MAXIMUM_VALUE_H_

#include <iostream>

class MaximumValue {
 public:
  void SetInputs() {
    int number;
    maximum_value = -1;
    for (size_t row = 0; row < 9; ++row) {
      for (size_t column = 0; column < 9; ++column) {
        std::cin >> number;
        if (number > maximum_value) {
          maximum_value = number;
          maximum_value_row = row + 1;
          maximum_value_column = column + 1;
        }
      }
    }
  }

  void Calculate() {}

  void PrintResult() {
    std::cout << maximum_value << "\n";
    std::cout << maximum_value_row << " " << maximum_value_column << "\n";
  }

 private:
  int maximum_value;
  size_t maximum_value_row;
  size_t maximum_value_column;
};

#ifdef BOJ_SUBMIT
int main() {
  MaximumValue maximum_value;
  maximum_value.SetInputs();
  maximum_value.Calculate();
  maximum_value.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2566_MAXIMUM_VALUE_H_
