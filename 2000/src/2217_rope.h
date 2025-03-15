#ifndef BOJ_2000_SRC_2217_ROPE_H_
#define BOJ_2000_SRC_2217_ROPE_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Rope {
 public:
  void SetInputs() {
    std::cin >> N;
    ropes.resize(N);
    for (int i = 0; i < N; i++) {
      std::cin >> ropes[i];
    }
  }

  void Calculate() {
    max_weight = 0;
    std::sort(ropes.begin(), ropes.end());
    for (int i = 0; i < N; i++) {
      max_weight = std::max(max_weight, ropes[i] * (N - i));
    }
  }

  void PrintResult() { std::cout << max_weight; }

 private:
  int N;
  std::vector<int> ropes;
  int max_weight;
};

#ifdef BOJ_SUBMIT
int main() {
  Rope rope;
  rope.SetInputs();
  rope.Calculate();
  rope.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2217_ROPE_H_
