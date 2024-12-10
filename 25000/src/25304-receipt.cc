#include "25304-receipt.h"

#include <iostream>

std::string check_receipt(int total, int n, std::istream& input) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    int price, quantity;
    input >> price >> quantity;
    sum += price * quantity;
  }

  return (sum == total) ? "Yes" : "No";
}
