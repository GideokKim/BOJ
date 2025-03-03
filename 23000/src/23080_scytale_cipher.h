#ifndef BOJ_23000_SRC_23080_SCYTALE_CIPHER_H_
#define BOJ_23000_SRC_23080_SCYTALE_CIPHER_H_

#include <iostream>
#include <string>

class ScytaleCipher {
 public:
  void SetInputs() { std::cin >> k >> cipher; }

  void Calculate() {
    for (size_t i = 0; i < cipher.size(); i += k) {
      result += cipher[i];
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t k;
  std::string cipher;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  ScytaleCipher scytale_cipher;
  scytale_cipher.SetInputs();
  scytale_cipher.Calculate();
  scytale_cipher.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_23000_SRC_23080_SCYTALE_CIPHER_H_
