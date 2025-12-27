#ifndef BOJ_30000_SRC_30008_JUNES_GRADE_H_
#define BOJ_30000_SRC_30008_JUNES_GRADE_H_

#include <iostream>
#include <vector>

class JunesGrade {
 public:
  void SetInputs() {
    std::cin >> n >> k;
    grades.resize(k);

    for (size_t i = 0; i < grades.size(); ++i) {
      std::cin >> grades[i];
    }
  }

  void Calculate() {
    results.resize(k);

    double percentage;
    long long degree;
    for (size_t i = 0; i < results.size(); ++i) {
      percentage = grades[i] * 100 / n;
      if (percentage > 96) {
        results[i] = 9;
      } else if (percentage > 89) {
        results[i] = 8;
      } else if (percentage > 77) {
        results[i] = 7;
      } else if (percentage > 60) {
        results[i] = 6;
      } else if (percentage > 40) {
        results[i] = 5;
      } else if (percentage > 23) {
        results[i] = 4;
      } else if (percentage > 11) {
        results[i] = 3;
      } else if (percentage > 4) {
        results[i] = 2;
      } else {
        results[i] = 1;
      }
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << " ";
    }
  }

 private:
  long long n, k;
  std::vector<long long> grades;
  std::vector<long long> results;
};

#ifdef BOJ_SUBMIT
int main() {
  JunesGrade junes_grade;
  junes_grade.SetInputs();
  junes_grade.Calculate();
  junes_grade.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30008_JUNES_GRADE_H_
