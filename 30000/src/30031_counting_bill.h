#ifndef BOJ_30000_SRC_30031_COUNTING_BILL_H_
#define BOJ_30000_SRC_30031_COUNTING_BILL_H_

#include <iostream>
#include <vector>

class CountingBill {
 public:
  void SetInputs() {
    size_t count;
    std::cin >> count;
    bills_count.resize(4, 0);
    for (size_t i = 0; i < count; ++i) {
      size_t money, dummy;
      std::cin >> money >> dummy;
      money -= 136;
      bills_count[money / 6]++;
    }
  }

  void Calculate() {
    result = 0;
    std::vector<size_t> bills = {1000, 5000, 10000, 50000};
    for (size_t i = 0; i < 4; ++i) {
      result += bills[i] * bills_count[i];
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<size_t> bills_count;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  CountingBill counting_bill;
  counting_bill.SetInputs();
  counting_bill.Calculate();
  counting_bill.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30031_COUNTING_BILL_H_
