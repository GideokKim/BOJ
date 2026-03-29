#ifndef BOJ_34000_SRC_34071_IS_FIRST_PROBLEM_THAT_EASY_H_
#define BOJ_34000_SRC_34071_IS_FIRST_PROBLEM_THAT_EASY_H_

#include <algorithm>
#include <iostream>
#include <vector>

class IsFirstProblemThatEasy {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    levels.resize(n);

    for (auto& level : levels) {
      std::cin >> level;
    }
  }

  void Calculate() {
    size_t target = levels[0];
    std::sort(levels.begin(), levels.end());

    if (levels[0] == target) {
      result = "ez";
    } else if (levels.back() == target) {
      result = "hard";
    } else {
      result = "?";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<size_t> levels;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  IsFirstProblemThatEasy is_first_problem_that_easy;
  is_first_problem_that_easy.SetInputs();
  is_first_problem_that_easy.Calculate();
  is_first_problem_that_easy.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34071_IS_FIRST_PROBLEM_THAT_EASY_H_
