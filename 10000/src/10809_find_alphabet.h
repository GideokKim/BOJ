#ifndef BOJ_10000_SRC_10809_FIND_ALPHABET_H_
#define BOJ_10000_SRC_10809_FIND_ALPHABET_H_

#include <iostream>
#include <string>
#include <vector>

class FindAlphabet {
 public:
  void SetInputs() { std::cin >> word; }

  void Calculate() {
    count.resize(26, -1);
    for (int index = 0; index < word.size(); ++index) {
      if (count[word[index] - 'a'] == -1) {
        count[word[index] - 'a'] = index;
      }
    }
  }

  void PrintResult() {
    for (int index = 0; index < count.size(); ++index) {
      std::cout << count[index] << " ";
    }
  }

 private:
  std::string word;
  std::vector<int> count;
};

#ifdef BOJ_SUBMIT
int main() {
  FindAlphabet find_alphabet;
  find_alphabet.SetInputs();
  find_alphabet.Calculate();
  find_alphabet.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10809_FIND_ALPHABET_H_
