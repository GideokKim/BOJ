#ifndef BOJ_28000_SRC_28014_PUSH_SPIRE_H_
#define BOJ_28000_SRC_28014_PUSH_SPIRE_H_

#include <iostream>
#include <vector>

class PushSpire {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    spires.resize(n);

    for (auto& spire : spires) {
      std::cin >> spire;
    }
  }

  void Calculate() {
    result = 1;

    for (size_t i = 0; i < spires.size() - 1; ++i) {
      if (spires[i] <= spires[i + 1]) {
        ++result;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<long long> spires;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  PushSpire pushSpire;
  pushSpire.SetInputs();
  pushSpire.Calculate();
  pushSpire.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_28000_SRC_28014_PUSH_SPIRE_H_
