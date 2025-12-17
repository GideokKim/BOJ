#ifndef BOJ_34000_SRC_34813_COMMON_EDUCATION_COURSE_H_
#define BOJ_34000_SRC_34813_COMMON_EDUCATION_COURSE_H_

#include <iostream>
#include <string>

class CommonEducationCourse {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    auto target = input[0];

    if (target == 'F') {
      result = "Foundation";
    } else if (target == 'C') {
      result = "Claves";
    } else if (target == 'V') {
      result = "Veritas";
    } else {
      result = "Exploration";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string input;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  CommonEducationCourse common_education_course;
  common_education_course.SetInputs();
  common_education_course.Calculate();
  common_education_course.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34813_COMMON_EDUCATION_COURSE_H_
