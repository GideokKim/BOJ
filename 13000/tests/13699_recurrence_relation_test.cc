#include "13000/src/13699_recurrence_relation.h"

#include "test_headers/test_helper.h"

class RecurrenceRelationTest : public IOTestFixture<RecurrenceRelation> {};

TEST_F(RecurrenceRelationTest, SampleCase) { RunTest("3", "5"); }

TEST_F(RecurrenceRelationTest, SampleCase2) { RunTest("25", "4861946401452"); }
