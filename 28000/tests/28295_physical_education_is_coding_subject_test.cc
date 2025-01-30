#include "28000/src/28295_physical_education_is_coding_subject.h"

#include "test_headers/test_helper.h"

class PhysicalEducationIsCodingSubjectTest
    : public IOTestFixture<PhysicalEducationIsCodingSubject> {};

TEST_F(PhysicalEducationIsCodingSubjectTest, SimpleCase) {
  RunTest("1\n2\n3\n1\n2\n3\n1\n2\n3\n1", "W");
}
