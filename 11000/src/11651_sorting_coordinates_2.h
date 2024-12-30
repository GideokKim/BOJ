#ifndef BOJ_27000_SRC_27323_RECTANGLE_H_
#define BOJ_27000_SRC_27323_RECTANGLE_H_

#include <functional>
#include <iostream>
#include <queue>

class SortingCoordinates2 {
 public:
  struct Coordinate {
    int x;
    int y;

    bool operator>(const Coordinate& other) const {
      if (y == other.y) {
        return x > other.x;
      }
      return y > other.y;
    }
  };

  void SetInputs() {
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
      int x, y;
      std::cin >> x >> y;
      pq.push(Coordinate{x, y});
    }
  }

  std::priority_queue<Coordinate, std::vector<Coordinate>,
                      std::greater<Coordinate>>
  GetPQ() {
    return pq;
  }

 private:
  int N;
  std::priority_queue<Coordinate, std::vector<Coordinate>,
                      std::greater<Coordinate>>
      pq;
};

#ifdef BOJ_SUBMIT
int main() {
  SortingCoordinates2 sorting_coordinates_2;
  sorting_coordinates_2.SetInputs();
  auto pq = sorting_coordinates_2.GetPQ();
  while (!pq.empty()) {
    std::cout << pq.top().x << ' ' << pq.top().y << '\n';
    pq.pop();
  }

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_27000_SRC_27323_RECTANGLE_H_
