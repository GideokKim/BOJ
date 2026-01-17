#ifndef BOJ_32000_SRC_32860_SUPERNOVA_H_
#define BOJ_32000_SRC_32860_SUPERNOVA_H_

#include <iostream>
#include <string>

class Supernova {
 public:
  void SetInputs() { std::cin >> n >> m; }

  void Calculate() {
    result = "SN " + std::to_string(n);
    if (m < 27) {
      char order = 'A' - 1 + static_cast<char>(m);
      result.push_back(order);
    } else {
      --m;
      char last_order = 'a' + static_cast<char>(m % 26);
      char order = 'a' - 1 + static_cast<char>(m / 26);
      result.push_back(order);
      result.push_back(last_order);
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Supernova supernova;
  supernova.SetInputs();
  supernova.Calculate();
  supernova.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32860_SUPERNOVA_H_
