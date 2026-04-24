#ifndef BOJ_32000_SRC_32369_ONION_EXPERIMENT_H_
#define BOJ_32000_SRC_32369_ONION_EXPERIMENT_H_

#include <iostream>

class OnionExperiment {
 public:
  void SetInputs() { std::cin >> n >> a >> b; }

  void Calculate() {
    result_a = 1;
    result_b = 1;

    for (size_t i = 0; i < static_cast<size_t>(n); ++i) {
      result_a += a;
      result_b += b;

      if (result_a < result_b) {
        long long temp = result_a;
        result_a = result_b;
        result_b = temp;
      }

      if (result_a == result_b) {
        --result_b;
      }
    }
  }

  void PrintResult() { std::cout << result_a << " " << result_b; }

 private:
  long long n, a, b;
  long long result_a, result_b;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  OnionExperiment onion_experiment;
  onion_experiment.SetInputs();
  onion_experiment.Calculate();
  onion_experiment.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32369_ONION_EXPERIMENT_H_
