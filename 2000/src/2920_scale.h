#ifndef BOJ_2000_SRC_2920_SCALE_H_
#define BOJ_2000_SRC_2920_SCALE_H_

#include <iostream>
#include <vector>

class Scale {
 public:
  void SetInputs() {
    numbers.resize(8);
    for (size_t i = 0; i < 8; ++i) {
      std::cin >> numbers[i];
    }
  }

  void Calculate() {
    result = "mixed";
    int num = numbers[0];
    if (num == 1) {
      for (size_t i = 1; i < 8; ++i) {
        ++num;
        if (num != numbers[i]) {
          return;
        }
      }
      result = "ascending";
    } else if (num == 8) {
      for (size_t i = 1; i < 8; ++i) {
        --num;
        if (num != numbers[i]) {
          return;
        }
      }
      result = "descending";
    } else {
      return;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<int> numbers;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  Scale scale;
  scale.SetInputs();
  scale.Calculate();
  scale.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2920_SCALE_H_
