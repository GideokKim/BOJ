#ifndef BOJ_4000_SRC_4732_SCALE_TRANSLATION_H_
#define BOJ_4000_SRC_4732_SCALE_TRANSLATION_H_

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class ScaleTranslation {
 public:
  void SetInputs() {
    scale = {"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};

    std::string target;
    std::vector<std::string> one_input;
    while (true) {
      std::cin >> target;
      if (target == "***") {
        break;
      }
      one_input.emplace_back(target);
      if (std::isdigit(target.back())) {
        input.emplace_back(one_input);
        one_input.clear();
      }
    }
  }

  void Calculate() {
    std::vector<std::string> result;
    for (auto& test_case : input) {
      int shift = std::stoi(test_case.back()) % 12;
      while (shift < 0) {
        shift += 12;
      }

      for (size_t i = 0; i < test_case.size() - 1; ++i) {
        int index;
        std::string target = test_case[i];
        if (std::find(scale.begin(), scale.end(), test_case[i]) ==
            scale.end()) {
          int count = 1;
          if (test_case[i].back() == 'b') {
            count = -1;
          }

          test_case[i].pop_back();
          for (index = 0; index < scale.size(); ++index) {
            if (test_case[i] == scale[index]) {
              break;
            }
          }
          index += count + 12;
          index %= 12;
          target = scale[index];
        }
        for (index = 0; index < scale.size(); ++index) {
          if (target == scale[index]) {
            break;
          }
        }
        index += shift;
        index %= 12;
        result.emplace_back(scale[index]);
      }

      results.emplace_back(result);
      result.clear();
    }
  }

  void PrintResult() {
    for (auto& result : results) {
      for (auto& target : result) {
        std::cout << target << " ";
      }
      std::cout << "\n";
    }
  }

 private:
  std::vector<std::string> scale;
  std::vector<std::vector<std::string>> input;
  std::vector<std::vector<std::string>> results;
};

#ifdef BOJ_SUBMIT
int main() {
  ScaleTranslation scale_translation;
  scale_translation.SetInputs();
  scale_translation.Calculate();
  scale_translation.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_4000_SRC_4732_SCALE_TRANSLATION_H_
