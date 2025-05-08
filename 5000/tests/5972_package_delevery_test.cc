#include "5000/src/5972_package_delevery.h"

#include "test_headers/test_helper.h"

class PackageDeleveryTest : public IOTestFixture<PackageDelevery> {};

TEST_F(PackageDeleveryTest, SampleCase) {
  RunTest("6 8\n4 5 3\n2 4 0\n4 1 4\n2 1 1\n5 6 1\n3 6 2\n3 2 6\n3 4 4", "5");
}
