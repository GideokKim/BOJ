#ifndef BOJ_10000_SRC_10814_AGE_STABLE_SORT_H_
#define BOJ_10000_SRC_10814_AGE_STABLE_SORT_H_

#include <algorithm>
#include <iostream>
#include <vector>

class AgeStableSort {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    user_list.resize(n);
    for (size_t i = 0; i < n; ++i) {
      auto& target = user_list[i];
      std::cin >> target.first >> target.second;
    }
  }

  void Calculate() {
    std::stable_sort(user_list.begin(), user_list.end(), compare);
  }

  void PrintResult() {
    for (auto target : user_list) {
      std::cout << target.first << " " << target.second << "\n";
    }
  }

 private:
  std::vector<std::pair<size_t, std::string>> user_list;

  static bool compare(std::pair<size_t, std::string> a,
                      std::pair<size_t, std::string> b) {
    return a.first < b.first;
  }
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  AgeStableSort age_stable_sort;
  age_stable_sort.SetInputs();
  age_stable_sort.Calculate();
  age_stable_sort.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10814_AGE_STABLE_SORT_H_
