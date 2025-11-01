#ifndef BOJ_20000_SRC_20299_THREE_MEASUREMENTS_H_
#define BOJ_20000_SRC_20299_THREE_MEASUREMENTS_H_

#include <iostream>
#include <vector>

class ThreeMeasurements {
 public:
  void SetInputs() {
    std::cin >> n >> k >> l;
    x1.resize(n);
    x2.resize(n);
    x3.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> x1[i] >> x2[i] >> x3[i];
    }
  }

  void Calculate() {
    for (size_t i = 0; i < n; ++i) {
      if ((x1[i] < l) || (x2[i] < l) || (x3[i] < l)) {
        continue;
      }

      if (x1[i] + x2[i] + x3[i] < k) {
        continue;
      }

      results.emplace_back(i);
    }
  }

  void PrintResult() {
    std::cout << results.size() << "\n";
    for (size_t i = 0; i < results.size(); ++i) {
      std::cout << x1[results[i]] << " " << x2[results[i]] << " "
                << x3[results[i]] << " ";
    }
  }

 private:
  size_t n, k, l;
  std::vector<size_t> x1;
  std::vector<size_t> x2;
  std::vector<size_t> x3;
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  ThreeMeasurements three_measurements;
  three_measurements.SetInputs();
  three_measurements.Calculate();
  three_measurements.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_20000_SRC_20299_THREE_MEASUREMENTS_H_
