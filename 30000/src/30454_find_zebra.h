#ifndef BOJ_30000_SRC_30454_FIND_ZEBRA_H_
#define BOJ_30000_SRC_30454_FIND_ZEBRA_H_

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class FindZebra {
 public:
  void SetInputs() {
    size_t n, l;
    std::cin >> n >> l;
    lines.resize(n);
    results.resize(501, 0);
    for (size_t i = 0; i < n; ++i) {
      std::cin >> lines[i];
    }
  }

  void Calculate() {
    for (auto& line : lines) {
      for (auto& target : line) {
        if (target == '0') {
          target = ' ';
        }
      }
      std::stringstream ss(line);
      std::string str;
      size_t count = 0;
      while (ss >> str) {
        ++count;
      }
      ++results[count];
    }
  }

  void PrintResult() {
    for (int i = 500; i >= 0; --i) {
      if (results[i]) {
        std::cout << i << " " << results[i];
        break;
      }
    }
  }

 private:
  std::vector<std::string> lines;
  std::vector<int> results;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  FindZebra find_zebra;
  find_zebra.SetInputs();
  find_zebra.Calculate();
  find_zebra.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_30000_SRC_30454_FIND_ZEBRA_H_
