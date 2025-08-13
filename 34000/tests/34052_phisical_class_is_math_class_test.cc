#include "34000/src/34052_phisical_class_is_math_class.h"

#include "test_headers/test_helper.h"

class PhysicalClassIsMathClassTest
    : public IOTestFixture<PhysicalClassIsMathClass> {};

TEST_F(PhysicalClassIsMathClassTest, SampleCase) {
  RunTest("375\n375\n375\n375", "Yes");
}

TEST_F(PhysicalClassIsMathClassTest, SampleCase2) {
  RunTest("375\n375\n375\n400", "No");
}

TEST_F(PhysicalClassIsMathClassTest, SampleCase3) {
  RunTest("300\n300\n300\n300", "Yes");
}
