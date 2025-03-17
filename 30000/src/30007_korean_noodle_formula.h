#ifndef BOJ_30000_SRC_30007_KOREAN_NOODLE_FORMULA_H_
#define BOJ_30000_SRC_30007_KOREAN_NOODLE_FORMULA_H_

#include <iostream>
#include <vector>

class KoreanNoodleFormula {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    a.resize(n, 0);
    b.resize(n, 0);
    x.resize(n, 0);
    results.resize(n, 0);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> a[i] >> b[i] >> x[i];
    }
  }

  void Calculate() {
    for (size_t i = 0; i < results.size(); ++i) {
      results[i] = a[i] * (x[i] - 1) + b[i];
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < results.size(); ++i) {
      std::cout << results[i] << '\n';
    }
  }

 private:
  std::vector<long long> a, b, x;
  std::vector<long long> results;
};

#ifdef BOJ_SUBMIT
int main() {
  KoreanNoodleFormula korean_noodle_formula;
  korean_noodle_formula.SetInputs();
  korean_noodle_formula.Calculate();
  korean_noodle_formula.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30007_KOREAN_NOODLE_FORMULA_H_
