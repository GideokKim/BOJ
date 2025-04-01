#include "10000/src/10181_federation_favorites.h"

#include "test_headers/test_helper.h"

class FederationFavoritesTest : public IOTestFixture<FederationFavorites> {};

TEST_F(FederationFavoritesTest, SampleCase) {
  RunTest("6\n12\n28\n-1\n",
          "6 = 1 + 2 + 3\n12 is NOT perfect.\n28 = 1 + 2 + 4 + 7 + 14\n");
}
