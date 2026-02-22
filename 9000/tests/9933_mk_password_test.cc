#include "9000/src/9933_mk_password.h"

#include "test_headers/test_helper.h"

class MkPasswordTest : public IOTestFixture<MkPassword> {};

TEST_F(MkPasswordTest, SampleCase) {
  RunTest("4\nlas\ngod\npsala\nsal", "3 a");
}

TEST_F(MkPasswordTest, SampleCase2) {
  RunTest("4\nkisik\nptq\ntttrp\ntulipan", "5 s");
}
