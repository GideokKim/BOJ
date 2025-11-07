#ifndef BOJ_23000_SRC_23037_ONLY_5_H_
#define BOJ_23000_SRC_23037_ONLY_5_H_

#include <iostream>
#include <string>

class Only5 {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    result = 0;
    for (auto target : n) {
      long long num = target - '0';
      long long num2 = num * num;
      result += num2 * num2 * num;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string n;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Only5 only5;
  only5.SetInputs();
  only5.Calculate();
  only5.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_23000_SRC_23037_ONLY_5_H_
