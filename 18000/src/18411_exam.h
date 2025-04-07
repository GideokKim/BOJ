#ifndef BOJ_18000_SRC_18411_EXAM_H_
#define BOJ_18000_SRC_18411_EXAM_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Exam {
 public:
  void SetInputs() {
    scores.resize(3);
    for (int i = 0; i < 3; ++i) {
      std::cin >> scores[i];
    }
  }

  void Calculate() {
    std::sort(scores.begin(), scores.end());
    result = scores[1] + scores[2];
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<int> scores;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Exam exam;
  exam.SetInputs();
  exam.Calculate();
  exam.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_18000_SRC_18411_EXAM_H_
