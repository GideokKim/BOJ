#ifndef BOJ_27000_SRC_27110_GIVING_SPECIAL_MEALS_H_
#define BOJ_27000_SRC_27110_GIVING_SPECIAL_MEALS_H_

#include <iostream>
#include <vector>

class GivingSpecialMeals {
 public:
  void SetInputs() {
    std::cin >> n;
    chicken_count.resize(3);
    for (int i = 0; i < 3; i++) {
      std::cin >> chicken_count[i];
    }
  }

  void Calculate() {
    result = 0;
    for (int i = 0; i < 3; i++) {
      if (chicken_count[i] > n) {
        result += n;
      } else {
        result += chicken_count[i];
      }
    }
  }

  void PrintResult() const { std::cout << result; }

 private:
  int n;
  std::vector<int> chicken_count;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  GivingSpecialMeals giving_special_meals;
  giving_special_meals.SetInputs();
  giving_special_meals.Calculate();
  giving_special_meals.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27110_GIVING_SPECIAL_MEALS_H_
