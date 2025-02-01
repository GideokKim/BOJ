#ifndef BOJ_9000_SRC_9498_TEST_SCORES_H_
#define BOJ_9000_SRC_9498_TEST_SCORES_H_

#include <iostream>
#include <string>

class TestScores {
 public:
  void SetInputs() { std::cin >> score; }

  void Calculate() {
    if (score >= 90) {
      result = "A";
    } else if (score >= 80) {
      result = "B";
    } else if (score >= 70) {
      result = "C";
    } else if (score >= 60) {
      result = "D";
    } else {
      result = "F";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int score;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  TestScores test_scores;
  test_scores.SetInputs();
  test_scores.Calculate();
  test_scores.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9498_TEST_SCORES_H_
