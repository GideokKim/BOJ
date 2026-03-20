#include "34000/src/34522_didimdol_scholarship.h"

#include "test_headers/test_helper.h"

class DidimdolScholarshipTest : public IOTestFixture<DidimdolScholarship> {};

TEST_F(DidimdolScholarshipTest, SampleCase) {
  RunTest("50 50 50 50 40 40 40 30 30 0 0\n3\n8 1.50 18\n3 2.30 20\n6 4.45 17",
          "90");
}
