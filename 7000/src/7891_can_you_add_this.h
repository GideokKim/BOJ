#ifndef BOJ_7000_SRC_7891_CAN_YOU_ADD_THIS_H_
#define BOJ_7000_SRC_7891_CAN_YOU_ADD_THIS_H_

#include <iostream>
#include <vector>
class CanYouAddThis {
 public:
  void SetInputs() {
    std::cin >> t;
    results.resize(t);
  }

  void Calculate() {
    long long x, y;
    for (size_t index = 0; index < t; ++index) {
      std::cin >> x >> y;
      results[index] = x + y;
    }
  }

  void PrintResult() {
    for (auto result : results) {
      std::cout << result << '\n';
    }
  }

 private:
  size_t t;
  std::vector<long long> results;
};

#ifdef BOJ_SUBMIT
int main() {
  CanYouAddThis can_you_add_this;
  can_you_add_this.SetInputs();
  can_you_add_this.Calculate();
  can_you_add_this.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_7000_SRC_7891_CAN_YOU_ADD_THIS_H_
