#include "templates/src/src_template.h"

#include "test_headers/test_helper.h"

class SrcTemplateTest : public IOTestFixture<SrcTemplate> {};

TEST_F(SrcTemplateTest, SimpleCase) { RunTest("500", "500"); }
