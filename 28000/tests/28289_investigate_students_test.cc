#include "28000/src/28289_investigate_students.h"

#include "test_headers/test_helper.h"

class InvestigateStudentsTest : public IOTestFixture<InvestigateStudents> {};

TEST_F(InvestigateStudentsTest, SimpleCase) {
  RunTest("5\n1 3 5\n2 1 10\n2 2 12\n2 4 8\n3 3 10", "2\n1\n1\n1\n");
}
