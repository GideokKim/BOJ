#ifndef BOJ_34000_SRC_34665_TRANSPORTATION_FEE_H_
#define BOJ_34000_SRC_34665_TRANSPORTATION_FEE_H_

#include <iostream>
#include <string>

class TransportationFee {
 public:
  void SetInputs() { std::cin >> a >> b; }

  void Calculate() { result = a == b ? 0 : 1550; }

  void PrintResult() { std::cout << result; }

 private:
  std::string a;
  std::string b;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  TransportationFee transportation_fee;
  transportation_fee.SetInputs();
  transportation_fee.Calculate();
  transportation_fee.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34665_TRANSPORTATION_FEE_H_
