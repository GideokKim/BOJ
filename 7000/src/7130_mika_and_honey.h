#ifndef BOJ_7000_SRC_7130_MIKA_AND_HONEY_H_
#define BOJ_7000_SRC_7130_MIKA_AND_HONEY_H_

#include <iostream>
#include <vector>

class MikaAndHoney {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> m >> h >> n;
    fields.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> fields[i].first >> fields[i].second;
    }
  }

  void Calculate() {
    result = 0;
    for (auto target : fields) {
      result += m * target.first > h * target.second ? m * target.first
                                                     : h * target.second;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t m, h;
  std::vector<std::pair<size_t, size_t>> fields;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  MikaAndHoney mika_and_honey;
  mika_and_honey.SetInputs();
  mika_and_honey.Calculate();
  mika_and_honey.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_7000_SRC_7130_MIKA_AND_HONEY_H_
