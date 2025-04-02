#ifndef BOJ_11000_SRC_11104_FRIDGE_OF_YOUR_DREAMS_H_
#define BOJ_11000_SRC_11104_FRIDGE_OF_YOUR_DREAMS_H_

#include <iostream>
#include <string>
#include <vector>

class FridgeOfYourDreams {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    results.resize(n, 0);

    std::string input;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> input;
      results[i] = std::stoul(input, nullptr, 2);
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < results.size(); ++i) {
      std::cout << results[i] << std::endl;
    }
  };

 private:
  std::vector<size_t> results;
};

#ifdef BOJ_SUBMIT
int main() {
  FridgeOfYourDreams fridge_of_your_dreams;
  fridge_of_your_dreams.SetInputs();
  fridge_of_your_dreams.Calculate();
  fridge_of_your_dreams.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11104_FRIDGE_OF_YOUR_DREAMS_H_
