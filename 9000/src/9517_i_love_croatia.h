#ifndef BOJ_9000_SRC_9517_I_LOVE_CROATIA_H_
#define BOJ_9000_SRC_9517_I_LOVE_CROATIA_H_

#include <iostream>
#include <vector>

class ILoveCroatia {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> result >> n;

    times.resize(n);
    answers.resize(n);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> times[i] >> answers[i];
    }
  }

  void Calculate() {
    long long time_count = 0;
    for (size_t i = 0; i < times.size(); ++i) {
      time_count += times[i];
      if (time_count > 210) {
        return;
      }

      if (answers[i] == 'T') {
        ++result;
        if (result == 9) {
          result -= 8;
        }
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  std::vector<long long> times;
  std::vector<char> answers;
  long long result;
};

#ifdef BOJ_SUBMIT
int main() {
  ILoveCroatia i_love_croatia;
  i_love_croatia.SetInputs();
  i_love_croatia.Calculate();
  i_love_croatia.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_9000_SRC_9517_I_LOVE_CROATIA_H_
