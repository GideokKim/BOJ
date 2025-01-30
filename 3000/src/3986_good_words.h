#ifndef BOJ_3000_SRC_3986_GOOD_WORDS_H_
#define BOJ_3000_SRC_3986_GOOD_WORDS_H_

#include <iostream>
#include <stack>
#include <string>
#include <vector>

class GoodWords {
 public:
  void SetInputs() { std::cin >> count; }

  void Calculate() {
    std::string input;
    size_t max_size = count;
    for (size_t i = 0; i < max_size; i++) {
      std::cin >> input;
      CheckGoodWord(input);
    }
  }

  void PrintResult() { std::cout << count; }

 private:
  void CheckGoodWord(const std::string& input) {
    std::stack<char> stack;
    for (const auto& c : input) {
      if (stack.empty()) {
        stack.push(c);
      } else if (stack.top() == c) {
        stack.pop();
      } else {
        stack.push(c);
      }
    }
    if (!stack.empty()) {
      --count;
    }
  }

  size_t count;
};

#ifdef BOJ_SUBMIT
int main() {
  GoodWords good_words;
  good_words.SetInputs();
  good_words.Calculate();
  good_words.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_3000_SRC_3986_GOOD_WORDS_H_
