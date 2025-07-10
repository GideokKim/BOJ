#ifndef BOJ_28000_SRC_28097_EXEMPLARY_STUDENT_H_
#define BOJ_28000_SRC_28097_EXEMPLARY_STUDENT_H_

#include <iostream>
#include <vector>

class ExemplaryStudent {
 public:
  void SetInputs() {
    std::cin >> n;
    tasks.resize(n);

    for (auto& task : tasks) {
      std::cin >> task;
    }
  }

  void Calculate() {
    hour = 8 * (n - 1);
    for (auto task : tasks) {
      hour += task;
    }
    day = hour / 24;
    hour %= 24;
  }

  void PrintResult() { std::cout << day << " " << hour; }

 private:
  size_t n;
  std::vector<size_t> tasks;
  size_t day, hour;
};

#ifdef BOJ_SUBMIT
int main() {
  ExemplaryStudent exemplaryStudent;
  exemplaryStudent.SetInputs();
  exemplaryStudent.Calculate();
  exemplaryStudent.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28097_EXEMPLARY_STUDENT_H_
