#ifndef BOJ_27000_SRC_27930_DO_YOU_BELIEVE_IN_FATE_H_
#define BOJ_27000_SRC_27930_DO_YOU_BELIEVE_IN_FATE_H_

#include <iostream>
#include <string>

class DoYouBelieveInFate {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    std::string korea = "KOREA";
    std::string yonsei = "YONSEI";

    auto korea_iter = korea.begin();
    auto yonsei_iter = yonsei.begin();
    for (auto target : input) {
      if (target == *korea_iter) {
        ++korea_iter;
      }
      if (target == *yonsei_iter) {
        ++yonsei_iter;
      }

      if (korea_iter == korea.end()) {
        result = korea;
        return;
      } else if (yonsei_iter == yonsei.end()) {
        result = yonsei;
        return;
      }
    }
  }

  void PrintResult() const { std::cout << result; }

 private:
  std::string input;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  DoYouBelieveInFate do_you_believe_in_fate;
  do_you_believe_in_fate.SetInputs();
  do_you_believe_in_fate.Calculate();
  do_you_believe_in_fate.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27930_DO_YOU_BELIEVE_IN_FATE_H_
