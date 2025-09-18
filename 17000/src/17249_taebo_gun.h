#ifndef BOJ_17000_SRC_17249_TAEBO_GUN_H_
#define BOJ_17000_SRC_17249_TAEBO_GUN_H_

#include <iostream>
#include <string>

class TaeboGun {
 public:
  void SetInputs() { std::cin >> input; }

  void Calculate() {
    size_t index = 0;
    left = 0;
    right = 0;
    bool is_left = true;
    while (index < input.size()) {
      if (input[index] == '@') {
        if (is_left) {
          ++left;
        } else {
          ++right;
        }
      }
      if (input[index] == '0') {
        is_left = false;
      }
      ++index;
    }
  }

  void PrintResult() { std::cout << left << " " << right; }

 private:
  std::string input;
  int left, right;
};

#ifdef BOJ_SUBMIT
int main() {
  TaeboGun taebo_gun;
  taebo_gun.SetInputs();
  taebo_gun.Calculate();
  taebo_gun.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_17000_SRC_17249_TAEBO_GUN_H_