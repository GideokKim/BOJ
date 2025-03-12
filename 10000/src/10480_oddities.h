#ifndef BOJ_10000_SRC_10480_ODDITIES_H_
#define BOJ_10000_SRC_10480_ODDITIES_H_

#include <iostream>
#include <vector>

class Oddities {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    numbers.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> numbers[i];
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < numbers.size(); ++i) {
      std::cout << numbers[i] << " is "
                << (numbers[i] % 2 == 0 ? "even" : "odd") << "\n";
    }
  }

 private:
  std::vector<int> numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  Oddities oddities;
  oddities.SetInputs();
  oddities.Calculate();
  oddities.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10480_ODDITIES_H_
