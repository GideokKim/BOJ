#ifndef BOJ_5000_SRC_5363_YODA_TALK_H_
#define BOJ_5000_SRC_5363_YODA_TALK_H_

#include <iostream>
#include <sstream>
#include <vector>

class YodaTalk {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    std::cin.ignore();
    sentences.resize(n);
    results.resize(n);
    for (size_t i = 0; i < n; ++i) {
      std::getline(std::cin, sentences[i]);
    }
  }

  void Calculate() {
    for (size_t i = 0; i < sentences.size(); ++i) {
      std::stringstream ss(sentences[i]);
      std::string word;
      std::string last_words;
      ss >> last_words;
      ss >> word;
      last_words += " " + word;
      while (ss >> word) {
        results[i] += word + " ";
      }
      results[i] += last_words;
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result << '\n';
    }
  }

 private:
  std::vector<std::string> sentences;
  std::vector<std::string> results;
};

#ifdef BOJ_SUBMIT
int main() {
  YodaTalk yoda_talk;
  yoda_talk.SetInputs();
  yoda_talk.Calculate();
  yoda_talk.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_5000_SRC_5363_YODA_TALK_H_
