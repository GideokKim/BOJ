#include "25000/src/25372_password.h"

#include "test_headers/test_helper.h"

class PasswordTest : public IOTestFixture<Password> {};

TEST_F(PasswordTest, SampleCase) {
  RunTest("3\n1245125\nasdij\n120318739721", "yes\nno\nno\n");
}
