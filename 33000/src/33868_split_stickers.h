#ifndef BOJ_33000_SRC_33868_SPLIT_STICKERS_H_
#define BOJ_33000_SRC_33868_SPLIT_STICKERS_H_

#include <algorithm>
#include <iostream>
#include <vector>

class SplitStickers {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    t.resize(n);
    b.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> t[i] >> b[i];
    }
  }

  void Calculate() {
    std::sort(t.rbegin(), t.rend());
    std::sort(b.begin(), b.end());
    result = t[0] * b[0] % 7 + 1;
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<long long> t;
  std::vector<long long> b;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  SplitStickers splitStickers;
  splitStickers.SetInputs();
  splitStickers.Calculate();
  splitStickers.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_33000_SRC_33868_SPLIT_STICKERS_H_
