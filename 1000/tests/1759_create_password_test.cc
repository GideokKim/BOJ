#include "1000/src/1759_create_password.h"

#include "test_headers/test_helper.h"

class CreatePasswordTest : public IOTestFixture<CreatePassword> {};

TEST_F(CreatePasswordTest, SampleCase) {
  RunTest("4 6\na t c i s w\n",
          "acis\nacit\naciw\nacst\nacsw\nactw\naist\naisw\naitw\nastw\ncist\nci"
          "sw\ncitw\nistw\n");
}
