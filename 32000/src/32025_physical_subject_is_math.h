#ifndef BOJ_32000_SRC_32025_PHYSICAL_SUBJECT_IS_MATH_H_
#define BOJ_32000_SRC_32025_PHYSICAL_SUBJECT_IS_MATH_H_

#include <iostream>

class PhysicalSubjectIsMath {
 public:
  void SetInputs() { std::cin >> h >> w; }

  void Calculate() {
    result = h > w ? w : h;
    result *= 50;
  }

  void PrintResult() { std::cout << result; }

 private:
  long long h, w;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  PhysicalSubjectIsMath physical_subject_is_math;
  physical_subject_is_math.SetInputs();
  physical_subject_is_math.Calculate();
  physical_subject_is_math.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32025_PHYSICAL_SUBJECT_IS_MATH_H_
