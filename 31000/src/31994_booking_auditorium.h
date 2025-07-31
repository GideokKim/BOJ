#ifndef BOJ_31000_SRC_31994_BOOKING_AUDITORIUM_H_
#define BOJ_31000_SRC_31994_BOOKING_AUDITORIUM_H_

#include <algorithm>
#include <iostream>
#include <vector>

class BookingAuditorium {
 public:
  void SetInputs() {
    seminar_list.resize(7);

    for (size_t i = 0; i < 7; ++i) {
      std::cin >> seminar_list[i].second >> seminar_list[i].first;
    }
  }

  void Calculate() { std::sort(seminar_list.begin(), seminar_list.end()); }

  void PrintResult() { std::cout << seminar_list.back().second; }

 private:
  std::vector<std::pair<int, std::string>> seminar_list;
};

#ifdef BOJ_SUBMIT
int main() {
  BookingAuditorium booking_auditorium;
  booking_auditorium.SetInputs();
  booking_auditorium.Calculate();
  booking_auditorium.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_31000_SRC_31994_BOOKING_AUDITORIUM_H_
