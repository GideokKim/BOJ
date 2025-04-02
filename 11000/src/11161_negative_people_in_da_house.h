#ifndef BOJ_11000_SRC_11161_NEGATIVE_PEOPLE_IN_DA_HOUSE_H_
#define BOJ_11000_SRC_11161_NEGATIVE_PEOPLE_IN_DA_HOUSE_H_

#include <iostream>
#include <vector>

class NegativePeopleInDaHouse {
 public:
  void SetInputs() {
    size_t t, m;
    std::cin >> t;
    results.resize(t, 0);
    for (size_t i = 0; i < t; ++i) {
      std::cin >> m;
      long long input, output;

      long long current_people = 0;
      long long min_people_in_house = 0;
      for (size_t j = 0; j < m; ++j) {
        std::cin >> input >> output;
        current_people += input - output;
        if (current_people < min_people_in_house) {
          min_people_in_house = current_people;
        }
      }
      results[i] = -min_people_in_house;
    }
  }

  void Calculate() {}

  void PrintResult() {
    for (size_t i = 0; i < results.size(); ++i) {
      std::cout << results[i] << std::endl;
    }
  };

 private:
  std::vector<long long> results;
};

#ifdef BOJ_SUBMIT
int main() {
  NegativePeopleInDaHouse negative_people_in_da_house;
  negative_people_in_da_house.SetInputs();
  negative_people_in_da_house.Calculate();
  negative_people_in_da_house.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_11000_SRC_11161_NEGATIVE_PEOPLE_IN_DA_HOUSE_H_
