#ifndef BOJ_24000_SRC_24883_AUTO_COMPLETION_H_
#define BOJ_24000_SRC_24883_AUTO_COMPLETION_H_

#include <iostream>
#include <vector>

class AutoCompletion {
 public:
  void SetInputs() { std::cin >> target; }

  void Calculate() {
    if (target == 'N' || target == 'n') {
      result = "Naver D2";
    } else {
      result = "Naver Whale";
    }
  }

  void PrintResult() const { std::cout << result; }

 private:
  char target;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  AutoCompletion auto_completion;
  auto_completion.SetInputs();
  auto_completion.Calculate();
  auto_completion.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_24000_SRC_24883_AUTO_COMPLETION_H_
