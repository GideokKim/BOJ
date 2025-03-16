#include "templates/src/src_template.h"

#include "test_headers/test_helper.h"

class SrcTemplateTest : public IOTestFixture<SrcTemplate> {};

TEST_F(SrcTemplateTest, SimpleCase) { RunTest("1", "2024 8"); }

TEST_F(SrcTemplateTest, SimpleCase2) { RunTest("2", "2025 3"); }

TEST_F(SrcTemplateTest, SimpleCase3) { RunTest("3", "2025 10"); }

TEST_F(SrcTemplateTest, SimpleCase4) { RunTest("4", "2026 5"); }

TEST_F(SrcTemplateTest, SimpleCase5) { RunTest("5", "2026 12"); }
