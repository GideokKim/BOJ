#ifndef BOJ_1000_SRC_1764_NO_HEAR_AND_NO_SEE_H_
#define BOJ_1000_SRC_1764_NO_HEAR_AND_NO_SEE_H_

#include <iostream>
#include <set>
#include <string>
#include <unordered_set>

class NoHearAndNoSee {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n >> m;

    std::string name;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> name;
      no_hear.insert(name);
    }
  }

  void Calculate() {
    std::string name;
    for (size_t i = 0; i < m; ++i) {
      std::cin >> name;
      if (no_hear.find(name) != no_hear.end()) {
        result.insert(name);
        no_hear.erase(name);
      }
    }
  }

  void PrintResult() {
    std::cout << result.size() << '\n';
    for (const auto& name : result) {
      std::cout << name << '\n';
    }
  }

 private:
  size_t m;
  std::unordered_set<std::string> no_hear;
  std::set<std::string> result;
};

#ifdef BOJ_SUBMIT
int main() {
  NoHearAndNoSee no_hear_and_no_see;
  no_hear_and_no_see.SetInputs();
  no_hear_and_no_see.Calculate();
  no_hear_and_no_see.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1764_NO_HEAR_AND_NO_SEE_H_
