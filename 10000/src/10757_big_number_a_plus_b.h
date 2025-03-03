#ifndef BOJ_10000_SRC_10757_BIG_NUMBER_A_PLUS_B_H_
#define BOJ_10000_SRC_10757_BIG_NUMBER_A_PLUS_B_H_

#include <iostream>
#include <string>

class BigNumberAPlusB {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() {
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
      int sum = carry;
      if (i >= 0) sum += a[i--] - '0';
      if (j >= 0) sum += b[j--] - '0';

      carry = sum / 10;
      result = static_cast<char>(sum % 10 + '0') + result;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string a;
  std::string b;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  BigNumberAPlusB big_number_a_plus_b;
  big_number_a_plus_b.SetInputs();
  big_number_a_plus_b.Calculate();
  big_number_a_plus_b.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10757_BIG_NUMBER_A_PLUS_B_H_
