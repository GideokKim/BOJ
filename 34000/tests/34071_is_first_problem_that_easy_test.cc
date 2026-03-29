#include "34000/src/34071_is_first_problem_that_easy.h"

#include "test_headers/test_helper.h"

class IsFirstProblemThatEasyTest
    : public IOTestFixture<IsFirstProblemThatEasy> {};

TEST_F(IsFirstProblemThatEasyTest, SampleCase) {
  RunTest("3\n10\n20\n30", "ez");
}

TEST_F(IsFirstProblemThatEasyTest, SampleCase2) {
  RunTest("3\n30\n10\n20", "hard");
}

TEST_F(IsFirstProblemThatEasyTest, SampleCase3) {
  RunTest("3\n20\n10\n30", "?");
}

TEST_F(IsFirstProblemThatEasyTest, SampleCase4) {
  RunTest("4\n10\n30\n20\n40", "ez");
}