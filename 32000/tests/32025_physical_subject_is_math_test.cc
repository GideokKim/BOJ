#include "32000/src/32025_physical_subject_is_math.h"

#include "test_headers/test_helper.h"

class PhysicalSubjectIsMathTest : public IOTestFixture<PhysicalSubjectIsMath> {
};

TEST_F(PhysicalSubjectIsMathTest, SimpleCase) { RunTest("8\n10", "400"); }

TEST_F(PhysicalSubjectIsMathTest, SimpleCase2) { RunTest("5\n13", "250"); }
