#ifndef BOJ_25000_SRC_25314_CODING_IS_PHYSICAL_EDUCATION_H_
#define BOJ_25000_SRC_25314_CODING_IS_PHYSICAL_EDUCATION_H_

#include <iostream>
#include <string>

class CodingIsPhysicalEducation {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {}

  void PrintResult() {
    for (int i = 0; i < n / 4; ++i) {
      std::cout << "long ";
    }
    std::cout << "int";
  }

 private:
  long long n;
};

#ifdef BOJ_SUBMIT
int main() {
  CodingIsPhysicalEducation codingIsPhysicalEducation;
  codingIsPhysicalEducation.SetInputs();
  codingIsPhysicalEducation.Calculate();
  codingIsPhysicalEducation.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25314_CODING_IS_PHYSICAL_EDUCATION_H_