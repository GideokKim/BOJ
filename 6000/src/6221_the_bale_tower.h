#ifndef BOJ_6000_SRC_6221_THE_BALE_TOWER_H_
#define BOJ_6000_SRC_6221_THE_BALE_TOWER_H_

#include <algorithm>
#include <iostream>
#include <vector>

class BaleTower {
 public:
  void SetInputs() {
    std::cin >> n;
    numbers.resize(n);
    pos.resize(n);

    long long l, r;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> l >> r;
      numbers[i] = {l, r};
    }
    std::sort(numbers.begin(), numbers.end(),
              [](const std::pair<long long, long long>& a,
                 const std::pair<long long, long long>& b) {
                return a.first > b.first;
              });
  }

  void Calculate() {
    for (size_t i = 0; i < numbers.size(); ++i) {
      auto iter =
          std::lower_bound(lis.begin(), lis.end(), numbers[i],
                           [](const std::pair<long long, long long>& a,
                              const std::pair<long long, long long>& b) {
                             return a.second > b.second;
                           });
      if (iter != lis.end()) {
        *iter = numbers[i];
      } else {
        lis.push_back(numbers[i]);
      }
      pos[i] = static_cast<long long>(iter - lis.begin());
    }

    long long curr = static_cast<long long>(n - 1);
    long long lis_index = static_cast<long long>(lis.size() - 1);

    while (curr >= 0 && lis_index >= 0) {
      if (pos[curr] == lis_index) {
        lis[lis_index] = numbers[curr];
        --lis_index;
      }
      --curr;
    }
  }

  void PrintResult() { std::cout << lis.size(); }

 private:
  size_t n;
  std::vector<std::pair<long long, long long>> numbers;
  std::vector<std::pair<long long, long long>> lis;
  std::vector<long long> pos;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  BaleTower bale_tower;
  bale_tower.SetInputs();
  bale_tower.Calculate();
  bale_tower.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_6000_SRC_6221_THE_BALE_TOWER_H_
