#include "34000/src/34584_take_it_or_double_it.h"

#include "test_headers/test_helper.h"

class TakeItOrDoubleItTest : public IOTestFixture<TakeItOrDoubleIt> {};

TEST_F(TakeItOrDoubleItTest, SampleCase) { RunTest("123 246", "double it"); }

TEST_F(TakeItOrDoubleItTest, SampleCase2) { RunTest("345 678", "take it"); }

TEST_F(TakeItOrDoubleItTest, SampleCase3) {
  RunTest("789 101112", "double it");
}
