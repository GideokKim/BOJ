#ifndef BOJ_1000_SRC_1181_SORT_WORDS_H_
#define BOJ_1000_SRC_1181_SORT_WORDS_H_

#include <iostream>
#include <set>

struct CustomOrder {
  bool operator()(const std::string& left, const std::string& right) const {
    return std::make_pair(left.size(), left) <
           std::make_pair(right.size(), right);
  }
};

class SortWords {
 public:
  void SetInputs() {
    std::cin >> n;

    std::string word;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> word;
      words.insert(word);
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (auto target : words) {
      std::cout << target << "\n";
    }
  }

 private:
  size_t n;
  std::set<std::string, CustomOrder> words;
};

#ifdef BOJ_SUBMIT
int main() {
  SortWords sort_words;
  sort_words.SetInputs();
  sort_words.Calculate();
  sort_words.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1181_SORT_WORDS_H_
