#ifndef BOJ_32000_SRC_32755_WALL_OF_4_HOURS_H_
#define BOJ_32000_SRC_32755_WALL_OF_4_HOURS_H_

#include <iostream>
#include <string>

class WallOf4Hours {
 public:
  void SetInputs() { std::cin >> s >> f; }

  void Calculate() { result = s > f ? "flight" : "high speed rail"; }

  void PrintResult() { std::cout << result; }

 private:
  long long s, f;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  WallOf4Hours wallOf4Hours;
  wallOf4Hours.SetInputs();
  wallOf4Hours.Calculate();
  wallOf4Hours.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32755_WALL_OF_4_HOURS_H_
