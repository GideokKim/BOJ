#ifndef BOJ_34000_SRC_34543_STAMP_TOUR_H_
#define BOJ_34000_SRC_34543_STAMP_TOUR_H_

#include <iostream>

class StampTour {
 public:
  void SetInputs() { std::cin >> n >> w; }

  void Calculate() {
    result = n * 10;

    if (n >= 3) {
      result += 20;
    }

    if (n == 5) {
      result += 50;
    }

    if (w > 1000) {
      result -= 15;
    }

    if (result < 0) {
      result = 0;
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  long long n, w;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  StampTour stamp_tour;
  stamp_tour.SetInputs();
  stamp_tour.Calculate();
  stamp_tour.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34543_STAMP_TOUR_H_
