#ifndef BOJ_34000_SRC_34534_FORM_A_STRAIGHT_H_
#define BOJ_34000_SRC_34534_FORM_A_STRAIGHT_H_

#include <iostream>
#include <set>

class FormAStraight {
 public:
  void SetInputs() {
    size_t input;
    for (size_t i = 0; i < 5; ++i) {
      std::cin >> input;
      inputs.insert(input);
    }
  }

  void Calculate() {
    result = 6;
    for (size_t start = 1; start < 6; ++start) {
      size_t count = 0;
      for (size_t num = start; num < start + 5; ++num) {
        if (inputs.find(num) == inputs.end()) {
          ++count;
        }
      }
      result = result < count ? result : count;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::set<size_t> inputs;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  FormAStraight form_a_straight;
  form_a_straight.SetInputs();
  form_a_straight.Calculate();
  form_a_straight.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34534_FORM_A_STRAIGHT_H_
