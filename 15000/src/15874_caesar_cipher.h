#ifndef BOJ_15000_SRC_15874_CAESAR_CIPHER_H_
#define BOJ_15000_SRC_15874_CAESAR_CIPHER_H_

#include <iostream>
#include <string>

class CaesarCipher {
 public:
  void SetInputs() {
    std::cin >> k >> s;
    std::getline(std::cin, input);
    std::getline(std::cin, input);
  }

  void Calculate() {
    k %= 26;
    result.reserve(s);
    for (auto target : input) {
      if ('A' <= target && target <= 'Z') {
        auto shifted_target = target + k;
        if ('Z' < shifted_target) {
          shifted_target -= 26;
        }
        result.push_back(shifted_target);
      } else if ('a' <= target && target <= 'z') {
        auto shifted_target = target + k;
        if ('z' < shifted_target) {
          shifted_target -= 26;
        }
        result.push_back(shifted_target);
      } else {
        result.push_back(target);
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t k, s;
  std::string input;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  CaesarCipher caesar_cipher;
  caesar_cipher.SetInputs();
  caesar_cipher.Calculate();
  caesar_cipher.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_15000_SRC_15874_CAESAR_CIPHER_H_
