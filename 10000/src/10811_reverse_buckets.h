#ifndef BOJ_10000_SRC_10811_REVERSE_BUCKETS_H_
#define BOJ_10000_SRC_10811_REVERSE_BUCKETS_H_

#include <algorithm>
#include <iostream>
#include <vector>

class ReverseBuckets {
 public:
  void SetInputs() {
    size_t n;
    std::cin >> n >> m;
    bucket_numbers.resize(n);
    for (size_t index = 0; index < n; ++index) {
      bucket_numbers[index] = index + 1;
    }
  }

  void CalculateBucketNumbers() {
    for (size_t i = 0; i < m; ++i) {
      size_t left, right;
      std::cin >> left >> right;
      std::reverse(bucket_numbers.begin() + left - 1,
                   bucket_numbers.begin() + right);
    }
  }

  void PrintBucketNumbers() {
    for (size_t number : bucket_numbers) {
      std::cout << number << " ";
    }
  }

 private:
  size_t m;
  std::vector<size_t> bucket_numbers;
};

#ifdef BOJ_SUBMIT
int main() {
  ReverseBuckets reverse_buckets;
  reverse_buckets.SetInputs();
  reverse_buckets.CalculateBucketNumbers();
  reverse_buckets.PrintBucketNumbers();
  return 0;
}
#endif  // BOJ_SUBMIT

#endif  // BOJ_10000_SRC_10811_REVERSE_BUCKETS_H_
