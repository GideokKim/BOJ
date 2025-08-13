#ifndef BOJ_34000_SRC_34052_PHISICAL_CLASS_IS_MATH_CLASS_H_
#define BOJ_34000_SRC_34052_PHISICAL_CLASS_IS_MATH_CLASS_H_

#include <iostream>
#include <numeric>
#include <string>
#include <vector>

class PhysicalClassIsMathClass {
 public:
  void SetInputs() {
    records.resize(4, 0);

    for (auto& record : records) {
      std::cin >> record;
    }
  }

  void Calculate() {
    result = std::accumulate(records.begin(), records.end(), 0) > 1500 ? "No"
                                                                       : "Yes";
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<size_t> records;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  PhysicalClassIsMathClass physicalClassIsMathClass;
  physicalClassIsMathClass.SetInputs();
  physicalClassIsMathClass.Calculate();
  physicalClassIsMathClass.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34052_PHISICAL_CLASS_IS_MATH_CLASS_H_
