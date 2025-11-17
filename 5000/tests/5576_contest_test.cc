#include "5000/src/5576_contest.h"

#include "test_headers/test_helper.h"

class Contest_Test : public IOTestFixture<Contest> {};

TEST_F(Contest_Test, SampleCase) {
  RunTest(
      "23\n23\n20\n15\n15\n14\n13\n9\n7\n6\n25\n19\n17\n17\n16\n13\n12\n11\n9\n"
      "5",
      "66 61");
}

TEST_F(Contest_Test, SampleCase2) {
  RunTest(
      "17\n25\n23\n25\n79\n29\n1\n61\n59\n100\n44\n74\n94\n57\n13\n54\n82\n0\n4"
      "2\n45",
      "240 250");
}
