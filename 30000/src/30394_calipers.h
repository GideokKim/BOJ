#ifndef BOJ_30000_SRC_30394_CALIPERS_H_
#define BOJ_30000_SRC_30394_CALIPERS_H_

#include <algorithm>
#include <iostream>
#include <vector>

class Calipers {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    points.resize(n);
    for (auto& point : points) {
      std::cin >> point.second >> point.first;
    }

    std::sort(points.begin(), points.end());
  }

  void Calculate() { result = points.back().first - points[0].first; }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<std::pair<long long, long long>> points;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  Calipers calipers;
  calipers.SetInputs();
  calipers.Calculate();
  calipers.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30394_CALIPERS_H_
