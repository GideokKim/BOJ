#ifndef BOJ_34000_SRC_34529_ACQUIRING_SW_IT_CORN_H_
#define BOJ_34000_SRC_34529_ACQUIRING_SW_IT_CORN_H_

#include <iostream>
#include <vector>

class AcquiringSwItCorn {
 public:
  void SetInputs() {
    componies.resize(3);
    units.resize(3);
    std::cin >> componies[0] >> componies[1] >> componies[2];
    std::cin >> units[0] >> units[1] >> units[2];
  }

  void Calculate() {
    result = componies[0] * units[0] / 100;
    result += componies[1] * units[1] / 50;
    result += componies[2] * units[2] / 20;
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<size_t> componies;
  std::vector<size_t> units;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  AcquiringSwItCorn acquiring_sw_it_corn;
  acquiring_sw_it_corn.SetInputs();
  acquiring_sw_it_corn.Calculate();
  acquiring_sw_it_corn.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34529_ACQUIRING_SW_IT_CORN_H_
