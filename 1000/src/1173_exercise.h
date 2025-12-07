#ifndef BOJ_1000_SRC_1173_EXERCISE_H_
#define BOJ_1000_SRC_1173_EXERCISE_H_

#include <iostream>

class Exercise {
 public:
  void SetInputs() { std::cin >> n >> min_m >> max_m >> t >> r; }

  void Calculate() {
    result = 0;
    if (min_m + t > max_m) {
      --result;
      return;
    }

    long long current_m = min_m;
    while (n) {
      if (max_m - current_m >= t) {
        current_m += t;
        --n;
      } else {
        current_m -= r;
        if (current_m < min_m) {
          current_m = min_m;
        }
      }

      ++result;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  long long n, min_m, max_m, t, r;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Exercise exercise;
  exercise.SetInputs();
  exercise.Calculate();
  exercise.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1173_EXERCISE_H_
