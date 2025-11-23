#ifndef BOJ_31000_SRC_31408_SCHEDULE_H_
#define BOJ_31000_SRC_31408_SCHEDULE_H_

#include <iostream>
#include <string>
#include <vector>

class Schedule {
 public:
  void SetInputs() {
    std::cin >> n;
    count.resize(100001, 0);
    for (size_t i = 0; i < n; ++i) {
      size_t num;
      std::cin >> num;
      ++count[num];
    }
  }

  void Calculate() {
    result = "YES";
    size_t limit = n % 2 ? n / 2 + 1 : n / 2;
    for (size_t i = 0; i < count.size(); ++i) {
      if (count[i] > limit) {
        result = "NO";
        return;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::vector<size_t> count;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  Schedule schedule;
  schedule.SetInputs();
  schedule.Calculate();
  schedule.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31408_SCHEDULE_H_
