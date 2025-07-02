#ifndef BOJ_28000_SRC_28431_MATCHING_SOCKS_H_
#define BOJ_28000_SRC_28431_MATCHING_SOCKS_H_

#include <algorithm>
#include <iostream>
#include <vector>

class MatchingSocks {
 public:
  void SetInputs() {
    inputs.resize(5, 0);
    for (auto& target : inputs) {
      std::cin >> target;
    }
  }

  void Calculate() {
    std::sort(inputs.begin(), inputs.end());
    for (size_t i = 0; i < 4; ++i) {
      if (inputs[i] == inputs[i + 1]) {
        ++i;
        if (i == 3) {
          result = inputs[i + 1];
        }
      } else {
        result = inputs[i];
        break;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<int> inputs;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  MatchingSocks matching_socks;
  matching_socks.SetInputs();
  matching_socks.Calculate();
  matching_socks.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28431_MATCHING_SOCKS_H_
