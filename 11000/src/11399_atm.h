#ifndef BOJ_11000_SRC_11399_ATM_H_
#define BOJ_11000_SRC_11399_ATM_H_

#include <algorithm>
#include <iostream>
#include <vector>

class ATM {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    times.resize(n);
    for (size_t i = 0; i < n; i++) {
      std::cin >> times[i];
    }
    std::sort(times.begin(), times.end());
  }

  void Calculate() {
    result = 0;
    for (size_t i = 0; i < times.size(); i++) {
      result += times[i] * (times.size() - i);
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<long long> times;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  ATM atm;
  atm.SetInputs();
  atm.Calculate();
  atm.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11399_ATM_H_
