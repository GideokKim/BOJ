#ifndef BOJ_9000_SRC_9375_INCOGNITO_H_
#define BOJ_9000_SRC_9375_INCOGNITO_H_

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

class Incognito {
 public:
  void SetInputs() { std::cin >> test_case_number; }

  void Calculate() {
    int number_of_clothes;
    for (int i = 0; i < test_case_number; i++) {
      std::cin >> number_of_clothes;
      std::string clothes_name;
      std::string clothes_category;
      clothes_map.clear();
      for (int j = 0; j < number_of_clothes; j++) {
        std::cin >> clothes_name >> clothes_category;
        clothes_map[clothes_category]++;
      }

      int answer = 1;
      for (auto& pair : clothes_map) {
        answer *= (pair.second + 1);
      }
      answer -= 1;
      result.push_back(answer);
    }
  }

  void PrintResult() {
    for (const auto& answer : result) {
      std::cout << answer << '\n';
    }
  }

 private:
  int test_case_number;
  std::unordered_map<std::string, int> clothes_map;
  std::vector<int> result;
};

#ifdef BOJ_SUBMIT
int main() {
  Incognito incognito;
  incognito.SetInputs();
  incognito.Calculate();
  incognito.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9375_INCOGNITO_H_
