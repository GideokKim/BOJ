#ifndef BOJ_10000_SRC_10768_SPECIAL_DAY_H_
#define BOJ_10000_SRC_10768_SPECIAL_DAY_H_

#include <iostream>

class SpecialDay {
 public:
  void SetInputs() { std::cin >> m >> d; }

  void Calculate() { result = m * 100 + d; }

  void PrintResult() {
    if (result == 218) {
      std::cout << "Special";
    } else if (result < 218) {
      std::cout << "Before";
    } else {
      std::cout << "After";
    }
  }

 private:
  long long m, d;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  SpecialDay specialDay;
  specialDay.SetInputs();
  specialDay.Calculate();
  specialDay.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10768_SPECIAL_DAY_H_
