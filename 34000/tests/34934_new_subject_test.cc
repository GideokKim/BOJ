#include "34000/src/34934_new_subject.h"

#include "test_headers/test_helper.h"

class NewSubjectTest : public IOTestFixture<NewSubject> {};

TEST_F(NewSubjectTest, SampleCase) {
  RunTest("4\nsecurity 2017\nai 2024\nmath 2026\nbigdata 2019", "math");
}

TEST_F(NewSubjectTest, SampleCase2) {
  RunTest("5\nai 2020\ncomputer 2001\nbigdata 2020\nmath 2020\nstat 2026",
          "stat");
}

TEST_F(NewSubjectTest, SampleCase3) { RunTest("1\nbigdata 2026", "bigdata"); }
