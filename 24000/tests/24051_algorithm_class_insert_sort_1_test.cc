#include "24000/src/24051_algorithm_class_insert_sort_1.h"

#include "test_headers/test_helper.h"

class InsertSort1Test : public IOTestFixture<InsertSort1> {};

TEST_F(InsertSort1Test, SampleCase) { RunTest("5 7\n4 5 1 3 2", "5"); }

TEST_F(InsertSort1Test, SampleCase2) { RunTest("5 11\n4 5 1 3 2", "-1"); }
