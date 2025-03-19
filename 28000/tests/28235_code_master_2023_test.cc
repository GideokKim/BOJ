#include "28000/src/28235_code_master_2023.h"

#include "test_headers/test_helper.h"

class CodeMaster2023Test : public IOTestFixture<CodeMaster2023> {};

TEST_F(CodeMaster2023Test, SampleCase) { RunTest("SONGDO", "HIGHSCHOOL"); }

TEST_F(CodeMaster2023Test, SampleCase2) { RunTest("CODE", "MASTER"); }

TEST_F(CodeMaster2023Test, SampleCase3) { RunTest("2023", "0611"); }

TEST_F(CodeMaster2023Test, SampleCase4) { RunTest("ALGORITHM", "CONTEST"); }
