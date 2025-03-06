#ifndef BOJ_11000_SRC_11948_SUBJECT_SELECTION_H_
#define BOJ_11000_SRC_11948_SUBJECT_SELECTION_H_

#include <algorithm>
#include <iostream>
#include <vector>
class SubjectSelection {
 public:
  void SetInputs() {
    science_scores.resize(4);
    social_scores.resize(2);
    for (int i = 0; i < 4; ++i) {
      std::cin >> science_scores[i];
    }
    for (int i = 0; i < 2; ++i) {
      std::cin >> social_scores[i];
    }
  }

  void Calculate() {
    std::sort(science_scores.begin(), science_scores.end());
    std::sort(social_scores.begin(), social_scores.end());
    result = science_scores[3] + science_scores[2] + science_scores[1] +
             social_scores[1];
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<int> science_scores;
  std::vector<int> social_scores;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  SubjectSelection subject_selection;
  subject_selection.SetInputs();
  subject_selection.Calculate();
  subject_selection.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11948_SUBJECT_SELECTION_H_
