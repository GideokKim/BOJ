#ifndef BOJ_10000_SRC_10845_QUEUE_H_
#define BOJ_10000_SRC_10845_QUEUE_H_

#include <iostream>
#include <queue>
#include <string>
#include <vector>

class Queue {
 public:
  void SetInputs() {
    std::cin >> n;
    std::cin.ignore();
  }

  void Calculate() {
    results.clear();
    std::string command;
    for (int i = 0; i < n; ++i) {
      std::cin >> command;
      if (command == "front") {
        if (integer_queue.empty()) {
          results.push_back(-1);
        } else {
          results.push_back(integer_queue.front());
        }
      } else if (command == "back") {
        if (integer_queue.empty()) {
          results.push_back(-1);
        } else {
          results.push_back(integer_queue.back());
        }
      } else if (command == "size") {
        results.push_back(integer_queue.size());
      } else if (command == "empty") {
        results.push_back(integer_queue.empty());
      } else if (command == "pop") {
        if (integer_queue.empty()) {
          results.push_back(-1);
        } else {
          results.push_back(integer_queue.front());
          integer_queue.pop();
        }
      } else if (command == "push") {
        int x;
        std::cin >> x;
        integer_queue.push(x);
      }
    }
  }

  void PrintResult() {
    for (const auto& result : results) {
      std::cout << result << '\n';
    }
  }

 private:
  std::queue<int> integer_queue;
  int n;
  std::vector<int> results;
};

#ifdef BOJ_SUBMIT
int main() {
  Queue queue;
  queue.SetInputs();
  queue.Calculate();
  queue.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10845_QUEUE_H_
