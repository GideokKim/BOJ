#ifndef BOJ_34000_SRC_34977_FRONT_BACK_EQUAL_SEQUENCE_H_
#define BOJ_34000_SRC_34977_FRONT_BACK_EQUAL_SEQUENCE_H_

#include <iostream>
#include <vector>

class FrontBackEqualSequence {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    input.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> input[i];
    }
  }

  void Calculate() {
    result = "no";
    for (size_t k = 1; k <= input.size() >> 1; ++k) {
      bool is_equal = true;
      for (size_t i = 0; i < k; ++i) {
        if (input[i] != input[input.size() - k + i]) {
          is_equal = false;
          break;
        }
      }
      if (is_equal) {
        result = "yes";
        return;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<int> input;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  FrontBackEqualSequence front_back_equal_sequence;
  front_back_equal_sequence.SetInputs();
  front_back_equal_sequence.Calculate();
  front_back_equal_sequence.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34977_FRONT_BACK_EQUAL_SEQUENCE_H_
