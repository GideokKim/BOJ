#include "1000/src/1173_exercise.h"

#include "test_headers/test_helper.h"

class ExerciseTest : public IOTestFixture<Exercise> {};

TEST_F(ExerciseTest, SampleCase) { RunTest("5 70 120 25 15", "10"); }

TEST_F(ExerciseTest, SampleCase2) { RunTest("100 50 100 5 200", "109"); }

TEST_F(ExerciseTest, SampleCase3) { RunTest("1 60 70 11 11", "-1"); }

TEST_F(ExerciseTest, SampleCase4) { RunTest("200 50 200 150 1", "30050"); }

TEST_F(ExerciseTest, SampleCase5) { RunTest("19 89 143 17 13", "40"); }
