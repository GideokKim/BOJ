#ifndef BOJ_2000_SRC_2858_DORMITORY_FLOOR_H_
#define BOJ_2000_SRC_2858_DORMITORY_FLOOR_H_

#include <iostream>
#include <vector>

class DormitoryFloor {
 public:
  void SetInputs() { std::cin >> r >> b; }

  void Calculate() {
    long long total_tile = r + b;
    std::vector<long long> candidates;
    for (long long number = 3; number <= total_tile; ++number) {
      if (total_tile % number == 0) {
        candidates.emplace_back(number);
      }
    }

    for (auto width : candidates) {
      long long length = total_tile / width;
      if (r == 2 * width + 2 * length - 4 && b == (width - 2) * (length - 2)) {
        l = length;
        w = width;
        return;
      }
    }
  }

  void PrintResult() { std::cout << l << " " << w; }

 private:
  long long r, b, l, w;
};

#ifdef BOJ_SUBMIT
int main() {
  DormitoryFloor dormitory_floor;
  dormitory_floor.SetInputs();
  dormitory_floor.Calculate();
  dormitory_floor.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2858_DORMITORY_FLOOR_H_
