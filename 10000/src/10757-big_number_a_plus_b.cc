#include "10757-big_number_a_plus_b.h"

std::string check_big_number_a_plus_b(std::istream& input) {
  std::string a, b;
  input >> a >> b;

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

  return result;
}