#ifndef BOJ_5000_SRC_5354_JBOX_H_
#define BOJ_5000_SRC_5354_JBOX_H_

#include <iostream>
#include <string>
#include <vector>

class Jbox {
 public:
  void SetInputs() {
    std::cin >> n;
    inputs.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> inputs[i];
    }
  }

  void Calculate() {
    boxes.resize(n, "");
    for (size_t i = 0; i < n; ++i) {
      auto target = inputs[i];
      std::string base = std::string(target, '#');
      boxes[i] += base + "\n";
      if (target == 1) {
        continue;
      }
      std::string inner = "#" + std::string(target - 2, 'J') + "#" + "\n";
      for (size_t j = 0; j < target - 2; ++j) {
        boxes[i] += inner;
      }
      boxes[i] += base + "\n";
    }
  }

  void PrintResult() {
    for (const auto& box : boxes) {
      std::cout << box << '\n';
    }
  }

 private:
  size_t n;
  std::vector<size_t> inputs;
  std::vector<std::string> boxes;
};

#ifdef BOJ_SUBMIT
int main() {
  Jbox jbox;
  jbox.SetInputs();
  jbox.Calculate();
  jbox.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5354_JBOX_H_
