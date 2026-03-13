#ifndef BOJ_32000_SRC_32280_TARDY_STUDENT_H_
#define BOJ_32000_SRC_32280_TARDY_STUDENT_H_

#include <iostream>
#include <string>
#include <vector>

class TardyStudent {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    std::cin.ignore();
    inputs.resize(n + 1);

    for (size_t i = 0; i < n + 1; ++i) {
      std::getline(std::cin, inputs[i]);
    }
    std::cin >> time_limit;
  }

  void Calculate() {
    result = 0;
    for (size_t i = 0; i < inputs.size(); ++i) {
      if (inputs[i][6] == 't') {
        time_limit = time_limit > inputs[i].substr(0, 5)
                         ? time_limit
                         : inputs[i].substr(0, 5);
        inputs[i][0] = '0';
        inputs[i][1] = '0';
        break;
      }
    }

    for (size_t i = 0; i < inputs.size(); ++i) {
      if (inputs[i].substr(0, 5) >= time_limit) {
        ++result;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::string> inputs;
  std::string time_limit;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  TardyStudent tardy_student;
  tardy_student.SetInputs();
  tardy_student.Calculate();
  tardy_student.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32280_TARDY_STUDENT_H_
