#ifndef BOJ_2000_SRC_2941_LJESNJAK_H_
#define BOJ_2000_SRC_2941_LJESNJAK_H_

#include <iostream>
#include <string>
#include <vector>

class Ljesnjak {
 public:
  void SetInputs() {
    std::cin >> input;
    alphabet = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
  }

  void Calculate() {
    result = 0;
    size_t empty_count = 0;
    for (size_t i = 0; i < alphabet.size(); ++i) {
      const auto& target = alphabet[i];
      while (input.find(target) != std::string::npos) {
        ++result;
        input.replace(input.find(target), target.size(), " ");
        ++empty_count;
      }
    }
    result += input.size() - empty_count;
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::string> alphabet;
  std::string input;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Ljesnjak ljesnjak;
  ljesnjak.SetInputs();
  ljesnjak.Calculate();
  ljesnjak.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2941_LJESNJAK_H_
