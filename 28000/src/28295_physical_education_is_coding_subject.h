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

  std::string Calculate() {
    int final_direction_number = direction_number % 4;
    if (final_direction_number == 0) {
      return "N";
    } else if (final_direction_number == 1) {
      return "E";
    } else if (final_direction_number == 2) {
      return "S";
    } else {
      return "W";
    }
  }

 private:
  int direction_number;
};

#ifdef BOJ_SUBMIT
int main() {
  PhysicalEducationIsCodingSubject physical_education_is_coding_subject;
  physical_education_is_coding_subject.SetInputs();
  std::cout << physical_education_is_coding_subject.Calculate() << '\n';

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28295_PHYSICAL_EDUCATION_IS_CODING_SUBJECT_H_
