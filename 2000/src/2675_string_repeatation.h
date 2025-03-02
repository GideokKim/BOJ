#ifndef BOJ_2000_SRC_2675_STRING_REPEATATION_H_
#define BOJ_2000_SRC_2675_STRING_REPEATATION_H_

#include <iostream>
#include <string>
#include <vector>

class StringRepeatation {
 public:
  void SetInputs() {
    std::cin >> test_case;
    input_strings.resize(test_case);
    repeat_counts.resize(test_case);
    for (size_t i = 0; i < test_case; i++) {
      std::cin >> repeat_counts[i] >> input_strings[i];
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < test_case; i++) {
      for (size_t j = 0; j < input_strings[i].size(); j++) {
        for (size_t k = 0; k < repeat_counts[i]; k++) {
          std::cout << input_strings[i][j];
        }
      }
      std::cout << std::endl;
    }
  }

 private:
  size_t test_case;
  std::vector<std::string> input_strings;
  std::vector<size_t> repeat_counts;
};

#ifdef BOJ_SUBMIT
int main() {
  StringRepeatation string_repeatation;
  string_repeatation.SetInputs();
  string_repeatation.Calculate();
  string_repeatation.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2675_STRING_REPEATATION_H_
