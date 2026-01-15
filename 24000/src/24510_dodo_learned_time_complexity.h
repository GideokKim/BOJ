#ifndef BOJ_24000_SRC_24510_DODO_LEARNED_TIME_COMPLEXITY_H_
#define BOJ_24000_SRC_24510_DODO_LEARNED_TIME_COMPLEXITY_H_

#include <iostream>
#include <string>
#include <vector>

class DodoLearnedTimeComplexity {
 public:
  void SetInputs() {
    std::cin >> c;
    codes.resize(c);

    for (size_t i = 0; i < c; ++i) {
      std::cin >> codes[i];
    }
  }

  void Calculate() {
    result = 0;
    for (auto target : codes) {
      size_t index = 0;
      size_t target_result = 0;
      while (index < target.size()) {
        size_t for_index = target.find("for", index);
        size_t while_index = target.find("while", index);
        if (for_index != std::string::npos ||
            while_index != std::string::npos) {
          index = for_index < while_index ? for_index : while_index;
          ++target_result;
        }
        ++index;
      }
      result = target_result > result ? target_result : result;
    }
  }

  void PrintResult() const { std::cout << result; }

 private:
  size_t c;
  std::vector<std::string> codes;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  DodoLearnedTimeComplexity dodo_learned_time_complexity;
  dodo_learned_time_complexity.SetInputs();
  dodo_learned_time_complexity.Calculate();
  dodo_learned_time_complexity.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24510_DODO_LEARNED_TIME_COMPLEXITY_H_
