#include "18000/src/18127_model_crystal.h"

#include "test_headers/test_helper.h"

class ModelCrystalTest : public IOTestFixture<ModelCrystal> {};

TEST_F(ModelCrystalTest, SimpleCase) { RunTest("3 4", "15"); }

TEST_F(ModelCrystalTest, SimpleCase2) { RunTest("4 4", "25"); }
