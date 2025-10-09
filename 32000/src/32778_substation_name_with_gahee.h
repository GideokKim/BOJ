#ifndef BOJ_32000_SRC_32778_SUBSTATION_NAME_WITH_GAHEE_H_
#define BOJ_32000_SRC_32778_SUBSTATION_NAME_WITH_GAHEE_H_

#include <iostream>
#include <string>

class SubstationNameWithGahee {
 public:
  void SetInputs() { std::getline(std::cin, sentence); }

  void Calculate() {
    result = sentence;

    auto open_character_index = sentence.find('(');
    if (open_character_index != std::string::npos) {
      result[open_character_index - 1] = '\n';
      result.erase(open_character_index, 1);
      result.pop_back();
    } else {
      result += "\n-";
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string sentence;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  SubstationNameWithGahee substationNameWithGahee;
  substationNameWithGahee.SetInputs();
  substationNameWithGahee.Calculate();
  substationNameWithGahee.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32778_SUBSTATION_NAME_WITH_GAHEE_H_
