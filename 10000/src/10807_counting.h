#ifndef BOJ_10000_SRC_10807_COUNTING_H_
#define BOJ_10000_SRC_10807_COUNTING_H_

#include <iostream>
#include <vector>

class Counting {
 public:
  void SetInputs() {
    int n;
    int number;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
      std::cin >> number;
      numbers.push_back(number);
    }
    std::cin >> target_number;
  }

  void Calculate() {
    count = 0;
    for (int number : numbers) {
      if (number == target_number) {
        count++;
      }
    }
  }

  void PrintResult() { std::cout << count; }

 private:
  int target_number;
  int count;
  std::vector<int> numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  Counting counting;
  counting.SetInputs();
  counting.Calculate();
  counting.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10807_COUNTING_H_
