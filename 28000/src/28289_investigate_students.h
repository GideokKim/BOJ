#ifndef BOJ_28000_SRC_28289_INVESTIGATE_STUDENTS_H_
#define BOJ_28000_SRC_28289_INVESTIGATE_STUDENTS_H_

#include <iostream>
#include <vector>

class InvestigateStudents {
 public:
  void SetInputs() {
    std::cin >> p;
    students.resize(p);

    int temp;
    for (size_t i = 0; i < p; ++i) {
      std::cin >> students[i].first >> students[i].second >> temp;
    }
  }

  void Calculate() {
    results.resize(4, 0);
    for (auto student : students) {
      if (student.first == 1) {
        ++results[3];
      } else {
        if (student.second < 3) {
          ++results[0];
        } else if (student.second == 3) {
          ++results[1];
        } else {
          ++results[2];
        }
      }
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << '\n';
    }
  }

 private:
  size_t p;
  std::vector<std::pair<int, int>> students;
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  InvestigateStudents investigateStudents;
  investigateStudents.SetInputs();
  investigateStudents.Calculate();
  investigateStudents.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28289_INVESTIGATE_STUDENTS_H_
