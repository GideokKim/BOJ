#ifndef BOJ_25000_SRC_25629_ODD_EVEN_SEQUENCES_H_
#define BOJ_25000_SRC_25629_ODD_EVEN_SEQUENCES_H_

#include <iostream>
#include <vector>

class OddEvenSequences {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    num.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> num[i];
    }
  }

  void Calculate() {
    result = 0;

    long long count = 0;
    for (auto target : num) {
      if (target % 2) {
        ++count;
      } else {
        --count;
      }
    }
    if (count == 0 || count == 1) {
      result = 1;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<int> num;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  OddEvenSequences odd_even_sequences;
  odd_even_sequences.SetInputs();
  odd_even_sequences.Calculate();
  odd_even_sequences.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25629_ODD_EVEN_SEQUENCES_H_
