#ifndef BOJ_9000_SRC_9375_INCOGNITO_H_
#define BOJ_9000_SRC_9375_INCOGNITO_H_

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

class Incognito {
 public:
  void SetInputs() {
    int test_case_number;
    int number_of_clothes;
    std::cin >> test_case_number;
    for (int i = 0; i < test_case_number; i++) {
      std::cin >> number_of_clothes;
      std::string clothes_name;
      std::string clothes_category;
      clothes_map.clear();
      for (int j = 0; j < number_of_clothes; j++) {
        std::cin >> clothes_name >> clothes_category;
        clothes_map[clothes_category]++;
      }
      Calculate();
    }
  }

  std::vector<int> GetResult() { return result; }

 private:
  void Calculate() {
    int answer = 1;
    for (auto& pair : clothes_map) {
      answer *= (pair.second + 1);
    }
    answer -= 1;
    result.push_back(answer);
  }

  std::unordered_map<std::string, int> clothes_map;
  std::vector<int> result;
};

#ifdef BOJ_SUBMIT
int main() {
  Incognito incognito;
  incognito.SetInputs();
  for (auto& answer : incognito.GetResult()) {
    std::cout << answer << std::endl;
  }
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9375_INCOGNITO_H_
