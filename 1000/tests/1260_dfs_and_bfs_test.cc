#include "1000/src/1260_dfs_and_bfs.h"

#include "test_headers/test_helper.h"

class DfsAndBfsTest : public IOTestFixture<DfsAndBfs> {};

TEST_F(DfsAndBfsTest, SampleCase) {
  RunTest("4 5 1\n1 2\n1 3\n1 4\n2 4\n3 4\n", "1 2 4 3 \n1 2 3 4 ");
}

TEST_F(DfsAndBfsTest, SampleCase2) {
  RunTest("5 5 3\n5 4\n5 2\n1 2\n3 4\n3 1\n", "3 1 2 5 4 \n3 1 4 2 5 ");
}

TEST_F(DfsAndBfsTest, SampleCase3) {
  RunTest("1000 1 1000\n999 1000\n", "1000 999 \n1000 999 ");
}
