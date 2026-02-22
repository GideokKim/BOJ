#ifndef BOJ_27000_SRC_27110_HALLI_GALLI_H_
#define BOJ_27000_SRC_27110_HALLI_GALLI_H_

#include <iostream>
#include <string>
#include <vector>

class HalliGalli {
 public:
  void SetInputs() {
    std::cin >> n;
    card_count.resize(4, 0);

    std::string fruit;
    size_t count;
    for (int i = 0; i < n; ++i) {
      std::cin >> fruit >> count;
      if (fruit == "BANANA") {
        card_count[0] += count;
      } else if (fruit == "PLUM") {
        card_count[1] += count;
      } else if (fruit == "STRAWBERRY") {
        card_count[2] += count;
      } else {
        card_count[3] += count;
      }
    }
  }

  void Calculate() {
    result = "NO";
    for (int i = 0; i < 4; ++i) {
      if (card_count[i] == 5) {
        result = "YES";
        return;
      }
    }
  }

  void PrintResult() const { std::cout << result; }

 private:
  size_t n;
  std::vector<size_t> card_count;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  HalliGalli halli_galli;
  halli_galli.SetInputs();
  halli_galli.Calculate();
  halli_galli.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27110_HALLI_GALLI_H_
