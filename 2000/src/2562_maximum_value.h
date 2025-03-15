#ifndef BOJ_2000_SRC_2562_MAXIMUM_VALUE_H_
#define BOJ_2000_SRC_2562_MAXIMUM_VALUE_H_

#include <iostream>
#include <vector>

class MaximumValue {
 public:
  void SetInputs() {
    for (int i = 0; i < 9; i++) {
      int number;
      std::cin >> number;
      numbers.push_back(number);
    }
  }

  void Calculate() {
    maximum_value = numbers[0];
    maximum_index = 1;
    for (size_t i = 0; i < numbers.size(); i++) {
      if (numbers[i] > maximum_value) {
        maximum_value = numbers[i];
        maximum_index = i + 1;
      }
    }
  }

  void PrintResult() { std::cout << maximum_value << '\n' << maximum_index; }

 private:
  std::vector<int> numbers;
  int maximum_value;
  size_t maximum_index;
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

#endif  // BOJ_2000_SRC_2562_MAXIMUM_VALUE_H_
