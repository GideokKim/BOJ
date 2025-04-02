#ifndef BOJ_11000_SRC_11121_COMMUNICATION_CHANNELS_H_
#define BOJ_11000_SRC_11121_COMMUNICATION_CHANNELS_H_

#include <iostream>
#include <string>
#include <vector>

class CommunicationChannels {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    results.resize(t, false);
    std::string left, right;
    for (size_t i = 0; i < t; ++i) {
      std::cin >> left >> right;
      if (left == right) {
        results[i] = true;
      }
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < results.size(); ++i) {
      if (results[i]) {
        std::cout << "OK\n";
      } else {
        std::cout << "ERROR\n";
      }
    }
  };

 private:
  std::vector<bool> results;
};

#ifdef BOJ_SUBMIT
int main() {
  CommunicationChannels communication_channels;
  communication_channels.SetInputs();
  communication_channels.Calculate();
  communication_channels.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11121_COMMUNICATION_CHANNELS_H_
