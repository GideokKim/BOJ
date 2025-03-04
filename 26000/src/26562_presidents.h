#ifndef BOJ_26000_SRC_26562_PRESIDENT_H_
#define BOJ_26000_SRC_26562_PRESIDENT_H_

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class Presidents {
 public:
  void SetInputs() {
    std::string number_string;
    getline(std::cin, number_string, '\n');
    int number = std::stoi(number_string);

    for (int index = 0; index < number; ++index) {
      std::string names;
      getline(std::cin, names, '\n');
      std::istringstream ss(names);
      std::string target;
      int price = 0;

      while (getline(ss, target, ' ')) {
        if (target == "Franklin") {
          price += 100;
        } else if (target == "Grant") {
          price += 50;
        } else if (target == "Jackson") {
          price += 20;
        } else if (target == "Hamilton") {
          price += 10;
        } else if (target == "Lincoln") {
          price += 5;
        } else if (target == "Washington") {
          price += 1;
        }
      }
      std::string price_string = "$" + std::to_string(price);
      prices.push_back(price_string);
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (size_t index = 0; index < prices.size(); ++index) {
      std::cout << prices[index] << std::endl;
    }
  }

 private:
  std::vector<std::string> prices;
};

#ifdef BOJ_SUBMIT
int main() {
  Presidents presidents;
  presidents.SetInputs();
  presidents.Calculate();
  presidents.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_26000_SRC_26562_PRESIDENT_H_
