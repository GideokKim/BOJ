#ifndef BOJ_30000_SRC_30018_TASHU_H_
#define BOJ_30000_SRC_30018_TASHU_H_

#include <iostream>
#include <vector>

class Tashu {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    a.resize(n, 0);
    b.resize(n, 0);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> a[i];
    }
    for (size_t i = 0; i < n; ++i) {
      std::cin >> b[i];
    }
  }

  void Calculate() {
    result = 0;
    long long num;
    for (size_t i = 0; i < a.size(); ++i) {
      num = a[i] - b[i];
      if (num > 0) {
        result += num;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<long long> a, b;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Tashu tashu;
  tashu.SetInputs();
  tashu.Calculate();
  tashu.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30018_TASHU_H_
