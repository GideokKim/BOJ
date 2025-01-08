#ifndef BOJ_5000_SRC_5598_CAESAR_CIPHER_H_
#define BOJ_5000_SRC_5598_CAESAR_CIPHER_H_

#include <iostream>
#include <vector>

class CaesarCipher {
 public:
  void SetInputs() { std::cin >> input; }

  void Decode() {
    output = input;
    for (size_t index = 0; index < input.size(); ++index) {
      if (input[index] <= 'C') {
        output[index] += 26;
      }
      output[index] -= 3;
    }
  }

  void PrintOutput() { std::cout << output << "\n"; }

 private:
  std::string input;
  std::string output;
};

#ifdef BOJ_SUBMIT
int main() {
  CaesarCipher caesar_cipher;
  caesar_cipher.SetInputs();
  caesar_cipher.Decode();
  caesar_cipher.PrintOutput();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5598_CAESAR_CIPHER_H_
