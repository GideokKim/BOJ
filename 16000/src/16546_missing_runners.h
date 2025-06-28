#ifndef BOJ_16000_SRC_16546_MISSING_RUNNERS_H_
#define BOJ_16000_SRC_16546_MISSING_RUNNERS_H_

#include <iostream>
#include <vector>

class MissingRunners {
 public:
  void SetInputs() {
    std::cin >> n;
    runners.resize(n + 1, true);
    runners[0] = false;

    size_t index;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> index;
      runners[index] = false;
    }
  }

  void Calculate() {
    for (size_t i = 0; i <= n; ++i) {
      if (runners[i]) {
        result = i;
        break;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::vector<bool> runners;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  MissingRunners missing_runners;
  missing_runners.SetInputs();
  missing_runners.Calculate();
  missing_runners.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_16000_SRC_16546_MISSING_RUNNERS_H_
