#ifndef BOJ_32000_SRC_32288_BARCODE_NICKNAME_H_
#define BOJ_32000_SRC_32288_BARCODE_NICKNAME_H_

#include <iostream>
#include <string>

class BarcodeNickname {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n >> input;
  }

  void Calculate() {
    for (auto& target : input) {
      if (target == 'I') {
        target = 'i';
      } else {
        target = 'L';
      }
    }
  }

  void PrintResult() { std::cout << input; }

 private:
  std::string input;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  BarcodeNickname barcode_nickname;
  barcode_nickname.SetInputs();
  barcode_nickname.Calculate();
  barcode_nickname.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32288_BARCODE_NICKNAME_H_
