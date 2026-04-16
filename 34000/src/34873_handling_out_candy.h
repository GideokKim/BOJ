#ifndef BOJ_34000_SRC_34873_HANDLING_OUT_CANDY_H_
#define BOJ_34000_SRC_34873_HANDLING_OUT_CANDY_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class HandlingOutCandy {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    candy_list.resize(2 * n + 1, 0);

    size_t index;
    for (size_t i = 0; i < 2 * n; ++i) {
      std::cin >> index;
      ++candy_list[index];
    }
  }

  void Calculate() {
    result = "Yes";
    std::sort(candy_list.begin(), candy_list.end());

    if (candy_list.back() > 2) {
      result = "No";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<size_t> candy_list;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  HandlingOutCandy handling_out_candy;
  handling_out_candy.SetInputs();
  handling_out_candy.Calculate();
  handling_out_candy.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34873_HANDLING_OUT_CANDY_H_
