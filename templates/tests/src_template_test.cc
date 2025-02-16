#include "templates/src/src_template.h"

#include "test_headers/test_helper.h"

class SrcTemplateTest : public IOTestFixture<SrcTemplate> {};

TEST_F(SrcTemplateTest, SimpleCase) {
  RunTest("1 4\n2 2\n2 1\n1 3\n3 0", "NO\n");
}

TEST_F(SrcTemplateTest, SimpleCase2) {
  RunTest("1 4\n0 1\n0 1\n0 1\n0 1", "NO\n");
}

TEST_F(SrcTemplateTest, SimpleCase3) {
  RunTest("1 4\n0 1\n0 1\n0 1\n0 0", "YES\n---X\n");
}

TEST_F(SrcTemplateTest, SimpleCase4) {
  RunTest("1 4\n0 0\n0 0\n0 0\n0 0", "NO\n");
}