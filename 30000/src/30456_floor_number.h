#ifndef BOJ_30000_SRC_30456_FLOOR_NUMBER_H_
#define BOJ_30000_SRC_30456_FLOOR_NUMBER_H_

#include <iostream>
#include <string>

class FloorNumber {
 public:
  void SetInputs() { std::cin >> n >> p; }

  void Calculate() {
    result = std::string(p - 1, '1');
    result += std::to_string(n);
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, p;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  FloorNumber floor_number;
  floor_number.SetInputs();
  floor_number.Calculate();
  floor_number.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30456_FLOOR_NUMBER_H_
