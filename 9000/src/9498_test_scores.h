#ifndef BOJ_9000_SRC_9498_TEST_SCORES_H_
#define BOJ_9000_SRC_9498_TEST_SCORES_H_

#include <iostream>

class TestScores {
 public:
  void SetInputs() { std::cin >> score; }

  void PrintResult() {
    if (score >= 90) {
      std::cout << "A";
    } else if (score >= 80) {
      std::cout << "B";
    } else if (score >= 70) {
      std::cout << "C";
    } else if (score >= 60) {
      std::cout << "D";
    } else {
      std::cout << "F";
    }
  }

 private:
  int score;
};

#ifdef BOJ_SUBMIT
int main() {
  TestScores test_scores;
  test_scores.SetInputs();
  test_scores.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9498_TEST_SCORES_H_
