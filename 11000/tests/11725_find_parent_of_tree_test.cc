#include "11000/src/11725_find_parent_of_tree.h"

#include "test_headers/test_helper.h"

class FindParentOfTreeTest : public IOTestFixture<FindParentOfTree> {};

TEST_F(FindParentOfTreeTest, SampleCase) {
  RunTest("7\n1 6\n6 3\n3 5\n4 1\n2 4\n4 7", "4\n6\n1\n3\n1\n4\n");
}

TEST_F(FindParentOfTreeTest, SampleCase2) {
  RunTest("12\n1 2\n1 3\n2 4\n3 5\n3 6\n4 7\n4 8\n5 9\n5 10\n6 11\n6 12",
          "1\n1\n2\n3\n3\n4\n4\n5\n5\n6\n6\n");
}