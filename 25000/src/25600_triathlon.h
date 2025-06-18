#ifndef BOJ_25000_SRC_25600_TRIATHLON_H_
#define BOJ_25000_SRC_25600_TRIATHLON_H_

#include <iostream>
#include <vector>

class Triathlon {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    a.resize(n);
    d.resize(n);
    g.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> a[i] >> d[i] >> g[i];
    }
  }

  void Calculate() {
    result = -1;
    long long score;
    for (size_t i = 0; i < a.size(); ++i) {
      if (a[i] == d[i] + g[i]) {
        score = 2 * a[i] * (d[i] + g[i]);
      } else {
        score = a[i] * (d[i] + g[i]);
      }
      result = result > score ? result : score;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<long long> a, d, g;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Triathlon triathlon;
  triathlon.SetInputs();
  triathlon.Calculate();
  triathlon.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25600_TRIATHLON_H_
