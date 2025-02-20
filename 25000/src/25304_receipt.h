#ifndef BOJ_25000_SRC_25304_RECEIPT_H_
#define BOJ_25000_SRC_25304_RECEIPT_H_

#include <iostream>
#include <string>

// 영수증 검증 함수
class Receipt {
 public:
  void SetInputs() { std::cin >> total >> n; }

  void Calculate() {
    long long sum = 0;

    for (int i = 0; i < n; i++) {
      long long price, quantity;
      std::cin >> price >> quantity;
      sum += price * quantity;
    }

    result = (sum == total) ? "Yes" : "No";
  }

  void PrintResult() { std::cout << result; }

 private:
  long long total, n;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  Receipt receipt;
  receipt.SetInputs();
  receipt.Calculate();
  receipt.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25304_RECEIPT_H_