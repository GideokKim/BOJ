#ifndef BOJ_5000_SRC_5576_CONTEST_H_
#define BOJ_5000_SRC_5576_CONTEST_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Contest {
 public:
  void SetInputs() {
    w.resize(10);
    k.resize(10);
    for (size_t i = 0; i < 10; ++i) {
      std::cin >> w[i];
    }
    for (size_t i = 0; i < 10; ++i) {
      std::cin >> k[i];
    }
  }

  void Calculate() {
    std::sort(w.begin(), w.end());
    std::sort(k.begin(), k.end());
    w_score = w[9] + w[8] + w[7];
    k_score = k[9] + k[8] + k[7];
  }

  void PrintResult() { std::cout << w_score << " " << k_score; }

 private:
  std::vector<size_t> w;
  std::vector<size_t> k;
  size_t w_score;
  size_t k_score;
};

#ifdef BOJ_SUBMIT
int main() {
  Contest contest;
  contest.SetInputs();
  contest.Calculate();
  contest.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5576_CONTEST_H_
