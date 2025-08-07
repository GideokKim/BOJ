#ifndef BOJ_32000_SRC_32941_WHY_DO_YOU_MAKE_RESERVATION_IN_YOUR_MIND_H_
#define BOJ_32000_SRC_32941_WHY_DO_YOU_MAKE_RESERVATION_IN_YOUR_MIND_H_

#include <iostream>
#include <string>
#include <vector>

class WhyDoYouMakeReservationInYourMind {
 public:
  void SetInputs() {
    size_t t, k, a;
    std::cin >> t >> x >> n;
    reservation.resize(t + 1, 0);

    for (size_t i = 0; i < n; ++i) {
      std::cin >> k;
      for (size_t j = 0; j < k; ++j) {
        std::cin >> a;
        ++reservation[a];
      }
    }
  }

  void Calculate() { result = n == reservation[x] ? "YES" : "NO"; }

  void PrintResult() { std::cout << result; }

 private:
  size_t x, n;
  std::vector<size_t> reservation;
  std::string result;
};

#ifdef BOJ_SUBMIT
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);

  WhyDoYouMakeReservationInYourMind why_do_you_make_reservation_in_your_mind;
  why_do_you_make_reservation_in_your_mind.SetInputs();
  why_do_you_make_reservation_in_your_mind.Calculate();
  why_do_you_make_reservation_in_your_mind.PrintResult();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_32000_SRC_32941_WHY_DO_YOU_MAKE_RESERVATION_IN_YOUR_MIND_H_
