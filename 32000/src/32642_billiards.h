#ifndef BOJ_32000_SRC_32642_BILLIARDS_H_
#define BOJ_32000_SRC_32642_BILLIARDS_H_

#include <iostream>
#include <string>

class Billiards {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    result = 0;
    long long sum = 0;

    long long input;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> input;
      sum = input ? sum + 1 : sum - 1;
      result += sum;
    }
  }

  void Calculate() {}

  void PrintResult() { std::cout << result; }

 private:
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Billiards billiards;
  billiards.SetInputs();
  billiards.Calculate();
  billiards.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32642_BILLIARDS_H_
