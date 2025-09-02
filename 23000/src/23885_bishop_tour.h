#ifndef BOJ_23000_SRC_23885_BISHOP_TOUR_H_
#define BOJ_23000_SRC_23885_BISHOP_TOUR_H_

#include <iostream>
#include <string>

class BishopTour {
 public:
  void SetInputs() { std::cin >> n >> m >> s_x >> s_y >> e_x >> e_y; }

  void Calculate() {
    if (n == 1 && s_y != e_y) {
      result = "NO";
      return;
    }

    if (m == 1 && s_x != e_x) {
      result = "NO";
      return;
    }

    result = (s_x - s_y + e_x - e_y) % 2 ? "NO" : "YES";
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n, m;
  size_t s_x, s_y, e_x, e_y;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  BishopTour bishop_tour;
  bishop_tour.SetInputs();
  bishop_tour.Calculate();
  bishop_tour.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_23000_SRC_23885_BISHOP_TOUR_H_
