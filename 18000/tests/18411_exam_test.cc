#include "18000/src/18411_exam.h"

#include "test_headers/test_helper.h"

class ExamTest : public IOTestFixture<Exam> {};

TEST_F(ExamTest, SimpleCase) { RunTest("70 80 90", "170"); }

TEST_F(ExamTest, SimpleCase2) { RunTest("70 100 70", "170"); }

TEST_F(ExamTest, SimpleCase3) { RunTest("70 70 70", "140"); }