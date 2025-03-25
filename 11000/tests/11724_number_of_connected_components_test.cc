#include "11000/src/11724_number_of_connected_components.h"

#include "test_headers/test_helper.h"

class NumberOfConnectedComponentsTest
    : public IOTestFixture<NumberOfConnectedComponents> {};

TEST_F(NumberOfConnectedComponentsTest, SampleCase) {
  RunTest("6 5\n1 2\n2 5\n5 1\n3 4\n4 6", "2");
}

TEST_F(NumberOfConnectedComponentsTest, SampleCase2) {
  RunTest("6 8\n1 2\n2 5\n5 1\n3 4\n4 6\n5 4\n2 4\n2 3", "1");
}
