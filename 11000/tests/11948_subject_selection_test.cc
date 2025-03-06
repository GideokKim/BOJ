#include "11000/src/11948_subject_selection.h"

#include "test_headers/test_helper.h"

class SubjectSelectionTest : public IOTestFixture<SubjectSelection> {};

TEST_F(SubjectSelectionTest, SampleCase) {
  RunTest("100\n34\n76\n42\n10\n0", "228");
}

TEST_F(SubjectSelectionTest, SampleCase2) {
  RunTest("15\n21\n15\n42\n15\n62\n", "140");
}
