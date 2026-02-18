#ifndef BOJ_9000_SRC_9316_HELLO_JUDGE_H_
#define BOJ_9000_SRC_9316_HELLO_JUDGE_H_

#include <iostream>
#include <string>

class HelloJudge {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    std::string hello_judge = "Hello World, Judge ";
    for (size_t i = 0; i < n; ++i) {
      result += hello_judge + std::to_string(i + 1) + "!\n";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  HelloJudge hello_judge;
  hello_judge.SetInputs();
  hello_judge.Calculate();
  hello_judge.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9316_HELLO_JUDGE_H_
