#ifndef BOJ_1000_SRC_1436_FILM_DIRECTOR_SHOM_H_
#define BOJ_1000_SRC_1436_FILM_DIRECTOR_SHOM_H_

#include <iostream>
#include <set>
#include <string>

class FilmDirectorShom {
 public:
  void SetInputs() { std::cin >> N; }

  void Calculate() {
    for (int i = 0; i < 10; ++i) {
      for (int j = 0; j < 10; ++j) {
        for (int k = 0; k < 10; ++k) {
          for (int l = 0; l < 10; ++l) {
            for (int m = 0; m < 10; ++m) {
              std::string number = "666" + std::to_string(i) +
                                   std::to_string(j) + std::to_string(k) +
                                   std::to_string(l) + std::to_string(m);
              all_numbers.insert(std::stoi(number));
              number = std::to_string(i) + "666" + std::to_string(j) +
                       std::to_string(k) + std::to_string(l) +
                       std::to_string(m);
              all_numbers.insert(std::stoi(number));
              number = std::to_string(i) + std::to_string(j) + "666" +
                       std::to_string(k) + std::to_string(l) +
                       std::to_string(m);
              all_numbers.insert(std::stoi(number));
              number = std::to_string(i) + std::to_string(j) +
                       std::to_string(k) + "666" + std::to_string(l) +
                       std::to_string(m);
              all_numbers.insert(std::stoi(number));
              number = std::to_string(i) + std::to_string(j) +
                       std::to_string(k) + std::to_string(l) + "666" +
                       std::to_string(m);
              all_numbers.insert(std::stoi(number));
              number = std::to_string(i) + std::to_string(j) +
                       std::to_string(k) + std::to_string(l) +
                       std::to_string(m) + "666";
              all_numbers.insert(std::stoi(number));
            }
          }
        }
      }
    }
  }

  void PrintResult() {
    int index = 1;
    for (auto iter = all_numbers.begin(); iter != all_numbers.end(); ++iter) {
      if (index == N) {
        std::cout << *iter;
        break;
      }
      ++index;
    }
  }

 private:
  int N;
  std::set<int> all_numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  FilmDirectorShom film_director_shom;
  film_director_shom.SetInputs();
  film_director_shom.Calculate();
  film_director_shom.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#ifdef BOJ_SUBMIT2
int main() {
  int order, number = 666, count = 0, copy_number = 0;
  std::cin >> order;
  while (true) {
    copy_number = number;
    while (copy_number >= 666) {
      if (copy_number % 1000 == 666) {
        ++count;
        break;
      }
      copy_number /= 10;
    }
    if (count == order) break;
    ++number;
  }
  std::cout << number << '\n';

  return 0;
}
#endif  // BOJ_SUBMIT2

#endif  // BOJ_1000_SRC_1436_FILM_DIRECTOR_SHOM_H_
