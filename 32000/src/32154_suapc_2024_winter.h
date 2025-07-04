#ifndef BOJ_32000_SRC_32154_SUAPC_2024_WINTER_H_
#define BOJ_32000_SRC_32154_SUAPC_2024_WINTER_H_

#include <iostream>
#include <string>
#include <vector>

class Suapc2024Winter {
 public:
  void SetInputs() { std::cin >> n; }

  void Calculate() {
    --n;
    solved.push_back({'B', 'C', 'D', 'E', 'F', 'G', 'H', 'J'});
    solved.push_back({'C', 'E', 'F', 'G', 'H', 'I'});
    solved.push_back({'C', 'E', 'F', 'G', 'H', 'I'});
    solved.push_back({'B', 'C', 'E', 'F', 'G', 'H'});
    solved.push_back({'C', 'E', 'F', 'G', 'H'});
    solved.push_back({'C', 'E', 'F', 'G', 'H'});
    solved.push_back({'C', 'E', 'F', 'G', 'H'});
    solved.push_back({'C', 'E', 'F', 'G', 'H'});
    solved.push_back({'C', 'E', 'F', 'G', 'H'});
    solved.push_back({'B', 'C', 'F', 'G', 'H'});
  }

  void PrintResult() {
    std::cout << solved[n].size() + 3 << '\n';
    std::cout << "A ";
    for (size_t index = 0; index < solved[n].size(); ++index) {
      std::cout << solved[n][index] << ' ';
    }
    std::cout << "L M";
  }

 private:
  size_t n;
  std::vector<std::vector<char>> solved;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  Suapc2024Winter suapc2024_winter;
  suapc2024_winter.SetInputs();
  suapc2024_winter.Calculate();
  suapc2024_winter.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32154_SUAPC_2024_WINTER_H_
