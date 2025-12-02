#ifndef BOJ_1000_SRC_1453_PC_ROOM_PART_TIME_JOB_H_
#define BOJ_1000_SRC_1453_PC_ROOM_PART_TIME_JOB_H_

#include <iostream>
#include <vector>

class PCRoomPartTimeJob {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n;
    seat_numbers.resize(101, 0);

    size_t seat_num;
    for (size_t i = 0; i < n; ++i) {
      std::cin >> seat_num;
      ++seat_numbers[seat_num];
    }
  }

  void Calculate() {
    result = 0;
    for (auto seat_number : seat_numbers) {
      if (seat_number > 0) {
        result += seat_number;
        --result;
      }
    }
  }

  void PrintResult() { std::cout << result; }

 private:
  size_t n;
  std::vector<size_t> seat_numbers;
  size_t result;
};

#ifdef BOJ_SUBMIT
int main() {
  PCRoomPartTimeJob pc_room_part_time_job;
  pc_room_part_time_job.SetInputs();
  pc_room_part_time_job.Calculate();
  pc_room_part_time_job.PrintResult();

  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_1000_SRC_1453_PC_ROOM_PART_TIME_JOB_H_
