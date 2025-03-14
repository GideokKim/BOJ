#ifndef BOJ_5000_SRC_5800_GRADE_STATISTICS_H_
#define BOJ_5000_SRC_5800_GRADE_STATISTICS_H_

#include <algorithm>
#include <iostream>
#include <vector>

class GradeStatistics {
 public:
  void SetInputs() {
    size_t k;
    std::cin >> k;
    grades.resize(k);
    internal_differences.resize(k, -1);
    for (size_t index = 0; index < k; ++index) {
      std::vector<int> grade;
      size_t n;
      std::cin >> n;
      grade.resize(n);
      for (size_t index = 0; index < n; ++index) {
        std::cin >> grade[index];
      }
      std::sort(grade.begin(), grade.end());
      grades[index] = grade;
    }
  }

  void Calculate() {
    for (size_t index = 0; index < grades.size(); ++index) {
      for (size_t index2 = 0; index2 < grades[index].size() - 1; ++index2) {
        internal_differences[index] =
            std::max(internal_differences[index],
                     grades[index][index2 + 1] - grades[index][index2]);
      }
    }
  }

  void PrintResult() {
    for (size_t index = 0; index < grades.size(); ++index) {
      std::cout << "Class " << index + 1 << "\n";
      std::cout << "Max " << grades[index].back() << ", Min "
                << grades[index].front() << ", Largest gap "
                << internal_differences[index] << "\n";
    }
  }

 private:
  std::vector<std::vector<int>> grades;
  std::vector<int> internal_differences;
};

#ifdef BOJ_SUBMIT
int main() {
  GradeStatistics grade_statistics;
  grade_statistics.SetInputs();
  grade_statistics.Calculate();
  grade_statistics.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5800_GRADE_STATISTICS_H_
