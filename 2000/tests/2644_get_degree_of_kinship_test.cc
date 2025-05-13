#include "2000/src/2644_get_degree_of_kinship.h"

#include "test_headers/test_helper.h"

class GetDegreeOfKinshipTest : public IOTestFixture<GetDegreeOfKinship> {};

TEST_F(GetDegreeOfKinshipTest, SampleCase) {
  RunTest("9\n7 3\n7\n1 2\n1 3\n2 7\n2 8\n2 9\n4 5\n4 6\n", "3");
}

TEST_F(GetDegreeOfKinshipTest, SampleCase2) {
  RunTest("9\n8 6\n7\n1 2\n1 3\n2 7\n2 8\n2 9\n4 5\n4 6\n", "-1");
}
