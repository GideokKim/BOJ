#ifndef BOJ_34000_SRC_34691_DO_YOU_LOVE_DSH_H_
#define BOJ_34000_SRC_34691_DO_YOU_LOVE_DSH_H_

#include <iostream>
#include <string>
#include <vector>

class DoYouLoveDsh {
 public:
  void SetInputs() {
    std::string s;
    while (std::cin >> s) {
      if (s == "end") {
        break;
      } else {
        inputs.emplace_back(s);
      }
    }
  }

  void Calculate() {
    results.resize(inputs.size());
    for (size_t i = 0; i < results.size(); ++i) {
      const auto& target = inputs[i];
      if (target == "animal") {
        results[i] = "Panthera tigris";
      } else if (target == "flower") {
        results[i] = "Forsythia koreana";
      } else {
        results[i] = "Pinus densiflora";
      }
    }
  }

  void PrintResult() {
    for (auto& result : results) {
      std::cout << result << "\n";
    }
  }

 private:
  std::vector<std::string> inputs;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  DoYouLoveDsh do_you_love_dsh;
  do_you_love_dsh.SetInputs();
  do_you_love_dsh.Calculate();
  do_you_love_dsh.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_34000_SRC_34691_DO_YOU_LOVE_DSH_H_
