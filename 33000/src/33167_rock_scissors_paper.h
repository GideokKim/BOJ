#ifndef BOJ_33000_SRC_33167_ROCK_SCISSORS_PAPER_H_
#define BOJ_33000_SRC_33167_ROCK_SCISSORS_PAPER_H_

#include <iostream>
#include <string>
#include <vector>

class RockScissorsPaper {
 public:
  void SetInputs() {
    std::cin >> fight_count;
    std::cin >> left >> right;
    result.resize(2, 0);
  }

  void Calculate() {
    for (size_t i = 0; i < fight_count; ++i) {
      if (left[i] == right[i]) {
        continue;
      }

      if (left[i] == 'R' && right[i] == 'S' ||
          left[i] == 'S' && right[i] == 'P' ||
          left[i] == 'P' && right[i] == 'R') {
        result[0]++;
      } else {
        result[1]++;
      }
    }
  }

  void PrintResult() { std::cout << result[0] << ' ' << result[1]; }

 private:
  size_t fight_count;
  std::string left, right;
  std::vector<int> result;
};

#ifdef BOJ_SUBMIT
int main() {
  RockScissorsPaper rockScissorsPaper;
  rockScissorsPaper.SetInputs();
  rockScissorsPaper.Calculate();
  rockScissorsPaper.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33167_ROCK_SCISSORS_PAPER_H_
