#include "2000/src/2684_coin_games.h"

#include "test_headers/test_helper.h"

class CoinGamesTest : public IOTestFixture<CoinGames> {};

TEST_F(CoinGamesTest, SampleCase) {
  RunTest(
      "4\nHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH\nTTTTTTTTTTTTTTTTTTTTTTTTTTT"
      "TTTTTTTTTTTTT\nHHTTTHHTTTHTHHTHHTTHTTTHHHTHTTHTTHTTTHTH\nHTHTHHHTHHHTHTH"
      "HHHTTTHTTTTTHHTTTTHTHHHHT",
      "0 0 0 0 0 0 0 38 \n38 0 0 0 0 0 0 0 \n4 7 6 4 7 4 5 1 \n6 3 4 5 3 6 5 6 "
      "\n");
}
