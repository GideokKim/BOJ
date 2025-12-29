#ifndef BOJ_10000_SRC_10804_REVERSE_CARD_PLACEMENT_H_
#define BOJ_10000_SRC_10804_REVERSE_CARD_PLACEMENT_H_

#include <iostream>
#include <vector>

class ReverseCardPlacement {
 public:
  void SetInputs() {
    a.resize(10);
    b.resize(10);
    for (int i = 0; i < 10; i++) {
      std::cin >> a[i] >> b[i];
    }
  }

  void Calculate() {
    result.resize(21, 0);
    for (size_t i = 1; i < result.size(); ++i) {
      result[i] = i;
    }

    for (size_t i = 0; i < 10; ++i) {
      std::vector<size_t> swap_list = result;
      size_t index = b[i];
      for (size_t j = a[i]; j <= b[i]; ++j) {
        result[j] = swap_list[index];
        --index;
      }
    }
  }

  void PrintResult() {
    for (auto target : result) {
      if (target == 0) {
        continue;
      }
      std::cout << target << " ";
    }
  }

 private:
  std::vector<size_t> a;
  std::vector<size_t> b;
  std::vector<size_t> result;
};

#ifdef BOJ_SUBMIT
int main() {
  ReverseCardPlacement reverse_card_placement;
  reverse_card_placement.SetInputs();
  reverse_card_placement.Calculate();
  reverse_card_placement.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10804_REVERSE_CARD_PLACEMENT_H_
