#ifndef BOJ_11000_SRC_11650_SORTING_COORDINATES_H_
#define BOJ_11000_SRC_11650_SORTING_COORDINATES_H_

#include <algorithm>
#include <iostream>
#include <vector>

class SortingCoordinates {
 public:
  struct Coordinate {
    int x;
    int y;

    bool operator<(const Coordinate& other) const {
      if (x == other.x) {
        return y < other.y;
      }
      return x < other.x;
    }
  };

  void SetInputs() {
    size_t n;
    std::cin >> n;
    coordinates.resize(n);

    for (int i = 0; i < n; ++i) {
      int x, y;
      std::cin >> x >> y;
      coordinates[i] = Coordinate{x, y};
    }
  }

  void Calculate() { std::sort(coordinates.begin(), coordinates.end()); }

  void PrintResult() {
    for (auto target : coordinates) {
      std::cout << target.x << " " << target.y << "\n";
    }
  }

 private:
  std::vector<Coordinate> coordinates;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  SortingCoordinates sorting_coordinates;
  sorting_coordinates.SetInputs();
  sorting_coordinates.Calculate();
  sorting_coordinates.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11650_SORTING_COORDINATES_H_
