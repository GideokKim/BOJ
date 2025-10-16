#ifndef BOJ_2000_SRC_2948_2009_H_
#define BOJ_2000_SRC_2948_2009_H_

#include <iostream>
#include <string>
#include <vector>

class _2009 {
 public:
  void SetInputs() { std::cin >> d >> m; }

  void Calculate() {
    month.resize(12, 0);
    month[1] = 31;
    month[2] = 28;
    month[3] = 31;
    month[4] = 30;
    month[5] = 31;
    month[6] = 30;
    month[7] = 31;
    month[8] = 31;
    month[9] = 30;
    month[10] = 31;
    month[11] = 30;

    size_t count = d;
    for (size_t i = 0; i < m; ++i) {
      count += month[i];
    }
    count %= 7;

    std::vector<std::string> week = {"Wednesday", "Thursday", "Friday",
                                     "Saturday",  "Sunday",   "Monday",
                                     "Tuesday"};
    result = week[count];
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t d, m;
  std::string result;
  std::vector<size_t> month;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  _2009 _2009;
  _2009.SetInputs();
  _2009.Calculate();
  _2009.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2948_2009_H_
