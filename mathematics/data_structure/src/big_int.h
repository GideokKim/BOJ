#ifndef BOJ_MATHEMATICS_DATA_STRUCTURE_SRC_BIG_INT_H_
#define BOJ_MATHEMATICS_DATA_STRUCTURE_SRC_BIG_INT_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

namespace boj {
namespace mathematics {
namespace data_structure {

class BigInt {
 public:
  BigInt() : unit_number(100000000), is_negative(false) {
    big_int_number.push_back(0);
  }

  BigInt(const std::string& number) : unit_number(100000000) {
    SetBigIntNumber(number);
  }

  BigInt(const std::vector<int>& number)
      : unit_number(100000000), is_negative(false), big_int_number(number) {}

  void SetBigIntNumber(const std::string& number_string) {
    big_int_number.clear();
    is_negative = (number_string[0] == '-');
    std::string number = is_negative ? number_string.substr(1) : number_string;

    int unit_digits = std::to_string(unit_number).length() - 1;

    for (int i = number.size(); i > 0; i -= unit_digits) {
      int start = std::max(0, i - unit_digits);
      big_int_number.push_back(std::stoi(number.substr(start, i - start)));
    }
  }

  BigInt operator+(const BigInt& other) const {
    if (is_negative == other.is_negative) {
      BigInt result;
      result.is_negative = is_negative;
      result.big_int_number = AddAbsoluteValues(other);
      return result;
    }
    return is_negative ? other - AbsoluteValue()
                       : *this - other.AbsoluteValue();
  }

  BigInt operator-(const BigInt& other) const {
    if (!is_negative && other.is_negative) {
      return *this + other.AbsoluteValue();
    } else if (is_negative && !other.is_negative) {
      BigInt result = other + AbsoluteValue();
      result.is_negative = true;
      return result;
    }

    if (AbsoluteValue() < other.AbsoluteValue()) {
      BigInt result = other - *this;
      result.is_negative = !is_negative;
      return result;
    }
    return SubtractAbsoluteValues(other);
  }

  BigInt AbsoluteValue() const {
    BigInt result = *this;
    result.is_negative = false;
    return result;
  }

  std::string ToString() const {
    if (big_int_number.empty()) {
      return "0";
    }
    std::string result =
        (is_negative ? "-" : "") + std::to_string(big_int_number.back());
    for (int i = big_int_number.size() - 2; i >= 0; --i) {
      result +=
          std::string(8 - std::to_string(big_int_number[i]).length(), '0') +
          std::to_string(big_int_number[i]);
    }
    return result;
  }

 private:
  int unit_number;
  bool is_negative;
  std::vector<int> big_int_number;

  std::vector<int> AddAbsoluteValues(const BigInt& other) const {
    std::vector<int> result;
    int carry = 0;
    size_t max_size =
        std::max(big_int_number.size(), other.big_int_number.size());

    for (size_t i = 0; i < max_size || carry; ++i) {
      int sum = carry;
      if (i < big_int_number.size()) sum += big_int_number[i];
      if (i < other.big_int_number.size()) sum += other.big_int_number[i];
      result.push_back(sum % unit_number);
      carry = sum / unit_number;
    }

    return result;
  }

  BigInt SubtractAbsoluteValues(const BigInt& other) const {
    std::vector<int> result;
    int borrow = 0;

    for (size_t i = 0; i < big_int_number.size(); ++i) {
      int sub = big_int_number[i] - borrow;
      if (i < other.big_int_number.size()) {
        sub -= other.big_int_number[i];
      }
      if (sub < 0) {
        sub += unit_number;
        borrow = 1;
      } else {
        borrow = 0;
      }
      result.push_back(sub);
    }

    while (result.size() > 1 && result.back() == 0) {
      result.pop_back();
    }

    return BigInt(result);
  }

  bool operator<(const BigInt& other) const {
    if (is_negative != other.is_negative) {
      return is_negative;
    }
    if (big_int_number.size() != other.big_int_number.size()) {
      return big_int_number.size() < other.big_int_number.size();
    }
    for (int i = big_int_number.size() - 1; i >= 0; --i) {
      if (big_int_number[i] != other.big_int_number[i]) {
        return big_int_number[i] < other.big_int_number[i];
      }
    }
    return false;
  }
};

}  // namespace data_structure
}  // namespace mathematics
}  // namespace boj

#endif  // BOJ_MATHEMATICS_DATA_STRUCTURE_SRC_BIG_INT_H_