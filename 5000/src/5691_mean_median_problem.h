#ifndef BOJ_5000_SRC_5691_MEAN_MEDIAN_PROBLEM_H_
#define BOJ_5000_SRC_5691_MEAN_MEDIAN_PROBLEM_H_

#include <iostream>
#include <vector>

class MeanMedianProblem {
 public:
  void SetInputs() {
    a_numbers.clear();
    b_numbers.clear();
    while (true) {
      int a_number, b_number;
      std::cin >> a_number >> b_number;
      if (a_number == 0 && b_number == 0) {
        break;
      }
      a_numbers.push_back(a_number);
      b_numbers.push_back(b_number);
    }
  }

  void Calculate() {
    size_t vector_size = a_numbers.size();
    results.resize(vector_size);
    for (size_t index = 0; index < vector_size; ++index) {
      results[index] = a_numbers[index] * 2 - b_numbers[index];
    }
  }

  void PrintResult() {
    for (size_t index = 0; index < results.size(); ++index) {
      std::cout << results[index] << "\n";
    }
  }

 private:
  std::vector<long long> a_numbers;
  std::vector<long long> b_numbers;
  std::vector<long long> results;
};

#ifdef BOJ_SUBMIT
int main() {
  MeanMedianProblem mean_median_problem;
  mean_median_problem.SetInputs();
  mean_median_problem.Calculate();
  mean_median_problem.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5691_MEAN_MEDIAN_PROBLEM_H_
