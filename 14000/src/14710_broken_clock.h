#ifndef BOJ_14000_SRC_14710_BROKEN_CLOCK_H_
#define BOJ_14000_SRC_14710_BROKEN_CLOCK_H_

#include <iostream>

class BrokenClock {
 public:
  void SetInputs() { std::cin >> hour >> minute; }

  void Calculate() { result = hour % 30 * 12 == minute ? 'O' : 'X'; }

  void PrintResult() { std::cout << result; }

 private:
  int hour, minute;
  char result;
};

#ifdef BOJ_SUBMIT
int main() {
  BrokenClock broken_clock;
  broken_clock.SetInputs();
  broken_clock.Calculate();
  broken_clock.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_14000_SRC_14710_BROKEN_CLOCK_H_
