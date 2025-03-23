#include "23000/src/23738_pectopah.h"

#include "test_headers/test_helper.h"

class PectopahTest : public IOTestFixture<Pectopah> {};

TEST_F(PectopahTest, SimpleCase) { RunTest("PECTOPAH", "ryestoran"); }

TEST_F(PectopahTest, SimpleCase2) { RunTest("MOCKBA", "moskva"); }

TEST_F(PectopahTest, SimpleCase3) { RunTest("HET", "nyet"); }

TEST_F(PectopahTest, SimpleCase4) { RunTest("TPAKTOP", "traktor"); }
