#ifndef BOJ_28000_SRC_28295_PHYSICAL_EDUCATION_IS_CODING_SUBJECT_H_
#define BOJ_28000_SRC_28295_PHYSICAL_EDUCATION_IS_CODING_SUBJECT_H_

#include <iostream>
#include <string>

class PhysicalEducationIsCodingSubject {
 public:
  void SetInputs() {
    direction_number = 0;
    int number;
    for (int i = 0; i < 10; ++i) {
      std::cin >> number;
      direction_number += number;
    }
  }

  void Calculate() {
    int final_direction_number = direction_number % 4;
    if (final_direction_number == 0) {
      result = "N";
    } else if (final_direction_number == 1) {
      result = "E";
    } else if (final_direction_number == 2) {
      result = "S";
    } else {
      result = "W";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  int direction_number;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  PhysicalEducationIsCodingSubject physical_education_is_coding_subject;
  physical_education_is_coding_subject.SetInputs();
  physical_education_is_coding_subject.Calculate();
  physical_education_is_coding_subject.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28295_PHYSICAL_EDUCATION_IS_CODING_SUBJECT_H_
