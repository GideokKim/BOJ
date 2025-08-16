#ifndef BOJ_5000_SRC_5555_RING_H_
#define BOJ_5000_SRC_5555_RING_H_

#include <iostream>
#include <string>
#include <vector>

class Ring {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> target >> n;
    rings.resize(n);
    for (size_t index = 0; index < n; ++index) {
      std::cin >> rings[index];
      rings[index] += rings[index];
    }
  }

  void Calculate() {
    result = 0;

    for (const auto& ring : rings) {
      if (ring.find(target) != std::string::npos) {
        ++result;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string target;
  std::vector<std::string> rings;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Ring ring;
  ring.SetInputs();
  ring.Calculate();
  ring.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5555_RING_H_
