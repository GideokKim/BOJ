#ifndef BOJ_11000_SRC_11131_BALANCING_WEIGHTS_H_
#define BOJ_11000_SRC_11131_BALANCING_WEIGHTS_H_

#include <iostream>
#include <vector>

class BalancingWeights {
 public:
  void SetInputs() {
    size_t t, n;
    std::cin >> t;
    results.resize(t, 0);
    for (size_t i = 0; i < t; ++i) {
      std::cin >> n;
      long long weight;
      for (size_t j = 0; j < n; ++j) {
        std::cin >> weight;
        results[i] += weight;
      }
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < results.size(); ++i) {
      if (results[i] > 0) {
        std::cout << "Right" << std::endl;
      } else if (results[i] < 0) {
        std::cout << "Left" << std::endl;
      } else {
        std::cout << "Equilibrium" << std::endl;
      }
    }
  };

 private:
  std::vector<long long> results;
};

#ifdef BOJ_SUBMIT
int main() {
  BalancingWeights balancing_weights;
  balancing_weights.SetInputs();
  balancing_weights.Calculate();
  balancing_weights.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11131_BALANCING_WEIGHTS_H_
