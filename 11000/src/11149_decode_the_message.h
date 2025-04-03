#ifndef BOJ_11000_SRC_11149_DECODE_THE_MESSAGE_H_
#define BOJ_11000_SRC_11149_DECODE_THE_MESSAGE_H_

#include <iostream>
#include <vector>

class DecodeTheMessage {
 public:
  void SetInputs() {
    size_t t;
    std::cin >> t;
    input_strings.resize(t, "");
    output_strings.resize(t, "");
    std::cin.ignore();

    for (size_t i = 0; i < t; ++i) {
      getline(std::cin, input_strings[i]);
      input_strings[i] += " ";
    }
  }

  void Calculate() {
    for (size_t i = 0; i < input_strings.size(); ++i) {
      while (input_strings[i].find(" ") != std::string::npos) {
        std::string chars =
            input_strings[i].substr(0, input_strings[i].find(" "));
        int num = 0;
        for (auto c : chars) {
          num += static_cast<int>(c - 'a');
        }

        num = num % 27;
        if (num == 26) {
          output_strings[i] += " ";
        } else {
          output_strings[i] += static_cast<char>(num + static_cast<int>('a'));
        }
        input_strings[i] =
            input_strings[i].substr(input_strings[i].find(" ") + 1);
      }
    }
  }

  void PrintResult() {
    for (size_t i = 0; i < output_strings.size(); ++i) {
      std::cout << output_strings[i] << std::endl;
    }
  };

 private:
  std::vector<std::string> input_strings;
  std::vector<std::string> output_strings;
};

#ifdef BOJ_SUBMIT
int main() {
  DecodeTheMessage decode_the_message;
  decode_the_message.SetInputs();
  decode_the_message.Calculate();
  decode_the_message.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11149_DECODE_THE_MESSAGE_H_
