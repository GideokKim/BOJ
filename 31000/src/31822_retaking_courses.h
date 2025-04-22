#ifndef BOJ_31000_SRC_31822_RETAKING_COURSES_H_
#define BOJ_31000_SRC_31822_RETAKING_COURSES_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class RetakingCourses {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> target >> n;
    target = std::string(target.begin(), target.begin() + 5);
    courses.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> courses[i];
      courses[i] = std::string(courses[i].begin(), courses[i].begin() + 5);
    }
  }

  void Calculate() {
    result = 0;
    for (size_t i = 0; i < courses.size(); ++i) {
      if (courses[i] == target) {
        ++result;
      }
    }
  }
  void PrintResult() { std::cout << result; }

 private:
  std::string target;
  std::vector<std::string> courses;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  RetakingCourses retaking_courses;
  retaking_courses.SetInputs();
  retaking_courses.Calculate();
  retaking_courses.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31822_RETAKING_COURSES_H_
