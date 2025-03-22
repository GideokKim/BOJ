#ifndef BOJ_19000_SRC_19637_PLEASE_WRITE_IF_INSTEAD_H_
#define BOJ_19000_SRC_19637_PLEASE_WRITE_IF_INSTEAD_H_

#include <iostream>
#include <vector>

class PleaseWriteIfInstead {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n >> m;
    std::string emblem;
    size_t power;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> emblem >> power;
      emblems.push_back({power, emblem});
    }
  }

  void Calculate() {}

  void PrintResult() {
    size_t power;
    for (size_t i = 0; i < m; ++i) {
      std::cin >> power;
      long long left = 0;
      long long right = emblems.size() - 1;
      while (left <= right) {
        long long mid = (left + right) / 2;
        if (power <= emblems[mid].first) {
          right = mid - 1;
        } else {
          left = mid + 1;
        }
      }
      std::cout << emblems[left].second << "\n";
    }
  }

 private:
  size_t m;
  std::vector<std::pair<size_t, std::string>> emblems;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  PleaseWriteIfInstead please_write_if_instead;
  please_write_if_instead.SetInputs();
  please_write_if_instead.Calculate();
  please_write_if_instead.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_19000_SRC_19637_PLEASE_WRITE_IF_INSTEAD_H_
