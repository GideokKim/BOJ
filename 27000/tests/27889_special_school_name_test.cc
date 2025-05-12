#include "27000/src/27889_special_school_name.h"

#include "test_headers/test_helper.h"

class SpecialSchoolNameTest : public IOTestFixture<SpecialSchoolName> {};

TEST_F(SpecialSchoolNameTest, SampleCase) {
  RunTest("NLCS", "North London Collegiate School");
}
