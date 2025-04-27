#ifndef BOJ_26000_SRC_26561_POPULATION_H_
#define BOJ_26000_SRC_26561_POPULATION_H_

#include <iostream>
#include <vector>

class Population {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    for (size_t index = 0; index < n; ++index) {
      size_t p, t;
      std::cin >> p >> t;
      population.push_back(std::make_pair(p, t));
    }
  }

  void Calculate() {
    for (size_t index = 0; index < population.size(); ++index) {
      population[index].first -= population[index].second / 7;
      population[index].first += population[index].second / 4;
    }
  }

  void PrintResult() {
    for (size_t index = 0; index < population.size(); ++index) {
      std::cout << population[index].first << std::endl;
    }
  }

 private:
  std::vector<std::pair<int, int>> population;
};

#ifdef BOJ_SUBMIT
int main() {
  Population population;
  population.SetInputs();
  population.Calculate();
  population.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_26000_SRC_26561_POPULATION_H_
