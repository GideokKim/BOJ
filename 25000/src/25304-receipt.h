#ifndef BOJ_25000_SRC_25304_RECEIPT_H_
#define BOJ_25000_SRC_25304_RECEIPT_H_

#include <istream>
#include <string>

// 영수증 검증 함수
std::string check_receipt(int total, int n, std::istream& input);

#ifdef BOJ_SUBMIT
// 백준 제출용 main 함수
int main() {
  int total, n;
  std::cin >> total >> n;

  int sum = 0;
  for (int i = 0; i < n; i++) {
    int price, quantity;
    std::cin >> price >> quantity;
    sum += price * quantity;
  }

  std::cout << (sum == total ? "Yes" : "No") << std::endl;

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_25000_SRC_25304_RECEIPT_H_