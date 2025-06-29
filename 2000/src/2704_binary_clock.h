#ifndef BOJ_2000_SRC_2704_BINARY_CLOCK_H_
#define BOJ_2000_SRC_2704_BINARY_CLOCK_H_

#include <iostream>
#include <string>
#include <vector>

class BinaryClock {
 public:
  void SetInputs() {
    std::cin >> n;
    times.resize(n, std::vector<std::string>(3));

    std::string time;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> time;
      times[i][0] = time.substr(0, 2);
      times[i][1] = time.substr(3, 2);
      times[i][2] = time.substr(6, 2);
    }
  }

  void Calculate() {
    for (auto& time : times) {
      for (auto& target : time) {
        int target_num = std::stoi(target);

        std::string target_str;
        while (target_num) {
          target_str = std::to_string(target_num % 2) + target_str;
          target_num /= 2;
        }
        while (target_str.size() < 6) {
          target_str = "0" + target_str;
        }
        target = target_str;
      }
    }
  }

  void PrintResult() {
    for (auto time : times) {
      for (size_t i = 0; i < 6; ++i) {
        std::cout << time[0][i] << time[1][i] << time[2][i];
      }
      std::cout << " ";
      for (auto target : time) {
        std::cout << target;
      }
      std::cout << "\n";
    }
  }

 private:
  size_t n;
  std::vector<std::vector<std::string>> times;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  BinaryClock binary_clock;
  binary_clock.SetInputs();
  binary_clock.Calculate();
  binary_clock.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_2000_SRC_2704_BINARY_CLOCK_H_
