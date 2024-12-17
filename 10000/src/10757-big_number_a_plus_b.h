#ifndef BOJ_10000_SRC_10757_BIG_NUMBER_A_PLUS_B_H_
#define BOJ_10000_SRC_10757_BIG_NUMBER_A_PLUS_B_H_

#include <string>

std::string check_big_number_a_plus_b(std::istream& input);

#ifdef BOJ_SUBMIT
// 백준 제출용 main 함수
#include <iostream>
#include <string>

int main() {
  std::string a, b;
  std::cin >> a >> b;

  std::string result;
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

  std::cout << result << std::endl;

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10757_BIG_NUMBER_A_PLUS_B_H_
