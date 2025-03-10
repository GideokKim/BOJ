#include "25000/src/25314_coding_is_physical_education.h"

#include "test_headers/test_helper.h"

class CodingIsPhysicalEducationTest
    : public IOTestFixture<CodingIsPhysicalEducation> {};

TEST_F(CodingIsPhysicalEducationTest, SampleCase) {
  RunTest("4\n", "long int");
}

TEST_F(CodingIsPhysicalEducationTest, SampleCase2) {
  RunTest("20", "long long long long long int");
}
