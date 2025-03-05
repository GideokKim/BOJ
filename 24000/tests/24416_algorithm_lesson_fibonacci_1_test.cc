#include "24000/src/24416_algorithm_lesson_fibonacci_1.h"

#include "test_headers/test_helper.h"

class AlgorithmLessonFibonacci1Test
    : public IOTestFixture<AlgorithmLessonFibonacci1> {};

TEST_F(AlgorithmLessonFibonacci1Test, SampleCase) { RunTest("5", "5 3"); }

TEST_F(AlgorithmLessonFibonacci1Test, SampleCase2) {
  RunTest("30", "832040 28");
}
