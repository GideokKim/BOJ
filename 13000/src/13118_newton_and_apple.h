#ifndef BOJ_13000_SRC_13118_NEWTON_AND_APPLE_H_
#define BOJ_13000_SRC_13118_NEWTON_AND_APPLE_H_

#include <iostream>
#include <vector>

class NewtonAndApple {
 public:
  void SetInputs() {
    long long y, r;

    people.resize(4);
    for (size_t i = 0; i < 4; ++i) {
      std::cin >> people[i];
    }
    std::cin >> x >> y >> r;
  }

  void Calculate() {
    result = 0;
    for (size_t i = 0; i < 4; ++i) {
      if (x == people[i]) {
        result = i + 1;
        break;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  long long x;
  size_t result;
  std::vector<long long> people;
};

#ifdef BOJ_SUBMIT
int main() {
  NewtonAndApple newton_and_apple;
  newton_and_apple.SetInputs();
  newton_and_apple.Calculate();
  newton_and_apple.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_13000_SRC_13118_NEWTON_AND_APPLE_H_
