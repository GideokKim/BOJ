#ifndef BOJ_8000_SRC_8958_OX_QUIZ_H_
#define BOJ_8000_SRC_8958_OX_QUIZ_H_

#include <iostream>
#include <string>
#include <vector>

class OxQuiz {
 public:
  void SetInputs() {
    std::cin >> t;
    inputs.resize(t);
    for (size_t index = 0; index < t; ++index) {
      std::cin >> inputs[index];
    }
  }

  void Calculate() {
    for (auto input : inputs) {
      int score = 0;
      int combo = 0;
      for (auto c : input) {
        if (c == 'O') {
          score += ++combo;
        } else {
          combo = 0;
        }
      }
      results.push_back(score);
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << '\n';
    }
  }

 private:
  size_t t;
  std::vector<std::string> inputs;
  std::vector<int> results;
};

#ifdef BOJ_SUBMIT
int main() {
  OxQuiz ox_quiz;
  ox_quiz.SetInputs();
  ox_quiz.Calculate();
  ox_quiz.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_8000_SRC_8958_OX_QUIZ_H_
