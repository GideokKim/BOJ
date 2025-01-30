#ifndef BOJ_5000_SRC_5598_CAESAR_CIPHER_H_
#define BOJ_5000_SRC_5598_CAESAR_CIPHER_H_

#include <iostream>
#include <vector>

class CaesarCipher {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    result = input;
    for (size_t index = 0; index < input.size(); ++index) {
      if (input[index] <= 'C') {
        result[index] += 26;
      }
      result[index] -= 3;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
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

#endif  // BOJ_5000_SRC_5598_CAESAR_CIPHER_H_
