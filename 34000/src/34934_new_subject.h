#ifndef BOJ_34000_SRC_34934_NEW_SUBJECT_H_
#define BOJ_34000_SRC_34934_NEW_SUBJECT_H_

#include <iostream>
#include <string>
#include <vector>

class NewSubject {
 public:
  void SetInputs() {
    std::cin >> n;
    subjects.resize(n);
    years.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> subjects[i] >> years[i];
    }
  }

  void Calculate() {
    for (size_t i = 0; i < n; ++i) {
      if (2026 == years[i]) {
        result = subjects[i];
        return;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::vector<std::string> subjects;
  std::vector<size_t> years;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  NewSubject new_subject;
  new_subject.SetInputs();
  new_subject.Calculate();
  new_subject.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_334934_NEW_SUBJECT_H_
