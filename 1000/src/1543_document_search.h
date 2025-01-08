#ifndef BOJ_1000_SRC_1543_DOCUMENT_SEARCH_H_
#define BOJ_1000_SRC_1543_DOCUMENT_SEARCH_H_

#include <iostream>
#include <string>

class DocumentSearch {
 public:
  void SetInput() {
    std::getline(std::cin, document);
    std::getline(std::cin, word);
  }

  void Calculate() {
    result = 0;
    for (int index = 0; index < document.size(); ++index) {
      if (document.substr(index, word.size()) == word) {
        result++;
        index += word.size() - 1;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::string document;
  std::string word;
  int result;
};

#ifdef BOJ_SUBMIT
int main() {
  DocumentSearch document_search;
  document_search.SetInput();
  document_search.Calculate();
  document_search.PrintResult();
  return 0;
}

#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1543_DOCUMENT_SEARCH_H_
