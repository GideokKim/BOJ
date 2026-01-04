#ifndef BOJ_32000_SRC_32932_DRONE_CONTROL_H_
#define BOJ_32000_SRC_32932_DRONE_CONTROL_H_

#include <iostream>
#include <string>
#include <vector>

class DroneControl {
 public:
  void SetInputs() {
    std::cin >> n >> k;
    blocks.resize(n);

    std::pair<int, int> block;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> block.first >> block.second;
      blocks[i] = block;
    }

    std::cin >> controls;
  }

  void Calculate() {
    result.first = 0;
    result.second = 0;
    for (auto control : controls) {
      int x = result.first;
      int y = result.second;
      if (control == 'L') {
        --x;
      } else if (control == 'R') {
        ++x;
      } else if (control == 'D') {
        --y;
      } else if (control == 'U') {
        ++y;
      }

      bool is_blocked = false;
      for (auto block : blocks) {
        if (x == block.first && y == block.second) {
          is_blocked = true;
          break;
        }
      }

      if (!is_blocked) {
        result.first = x;
        result.second = y;
      }
    }
  }

  void PrintResult() { std::cout << result.first << " " << result.second; }

 private:
  size_t n, k;
  std::vector<std::pair<int, int>> blocks;
  std::string controls;
  std::pair<int, int> result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  DroneControl drone_control;
  drone_control.SetInputs();
  drone_control.Calculate();
  drone_control.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32932_DRONE_CONTROL_H_
