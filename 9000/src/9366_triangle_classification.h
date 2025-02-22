#ifndef BOJ_9000_SRC_9366_TRIANGLE_CLASSIFICATION_H_
#define BOJ_9000_SRC_9366_TRIANGLE_CLASSIFICATION_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class TriangleClassification {
 public:
  void SetInputs() { std::cin >> test_case_number; }

  void Calculate() {
    std::vector<long long> sides(3);
    for (size_t i = 0; i < test_case_number; i++) {
      std::cin >> sides[0] >> sides[1] >> sides[2];
      std::sort(sides.begin(), sides.end());
      if (sides[0] + sides[1] <= sides[2]) {
        results.push_back("invalid!");
      } else if (sides[0] == sides[1] && sides[1] == sides[2]) {
        results.push_back("equilateral");
      } else if (sides[0] == sides[1] || sides[1] == sides[2] ||
                 sides[0] == sides[2]) {
        results.push_back("isosceles");
      } else {
        results.push_back("scalene");
      }
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < results.size(); i++) {
      std::cout << "Case #" << i + 1 << ": " << results[i] << '\n';
    }
  }

 private:
  size_t test_case_number;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  TriangleClassification triangle_classification;
  triangle_classification.SetInputs();
  triangle_classification.Calculate();
  triangle_classification.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9366_TRIANGLE_CLASSIFICATION_H_
