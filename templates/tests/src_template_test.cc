#include "templates/src/src_template.h"

#include "test_headers/test_helper.h"

class SrcTemplateTest : public IOTestFixture<SrcTemplate> {};

TEST_F(SrcTemplateTest, SimpleCase) { RunTest("3\n3 2", "4"); }

TEST_F(SrcTemplateTest, SimpleCase2) { RunTest("3\n2 2", "1"); }

TEST_F(SrcTemplateTest, SimpleCase3) { RunTest("5\n2 2", "13"); }

TEST_F(SrcTemplateTest, SimpleCase4) { RunTest("5\n2 3", "12"); }

TEST_F(SrcTemplateTest, SimpleCase5) { RunTest("6\n3 3", "18"); }
