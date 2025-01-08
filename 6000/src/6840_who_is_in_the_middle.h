#ifndef BOJ_6000_SRC_6940_WHO_IS_IN_THE_MIDDLE_H_
#define BOJ_6000_SRC_6940_WHO_IS_IN_THE_MIDDLE_H_

#include <iostream>
#include <set>

class WhoIsInTheMiddle {
 public:
  void SetInputs() {
    int number;
    for (size_t index = 0; index < 3; ++index) {
      std::cin >> number;
      numbers.insert(number);
    }
  }

  void PrintMiddle() {
    auto it = numbers.begin();
    std::advance(it, 1);
    std::cout << *it << '\n';
  }

 private:
  std::set<int> numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  WhoIsInTheMiddle who_is_in_the_middle;
  who_is_in_the_middle.SetInputs();
  who_is_in_the_middle.PrintMiddle();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_6000_SRC_6840_WHO_IS_IN_THE_MIDDLE_H_
