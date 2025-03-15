#include "4000/src/4673_self_number.h"

#include "test_headers/test_helper.h"

class SelfNumberTest : public IOTestFixture<SelfNumber> {};

TEST_F(SelfNumberTest, MultipleTestCases) {
  RunTest("100\n", "1\n3\n5\n7\n9\n20\n31\n42\n53\n64\n75\n86\n97\n");
}
