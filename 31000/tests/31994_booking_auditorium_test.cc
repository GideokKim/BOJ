#include "31000/src/31994_booking_auditorium.h"

#include "test_headers/test_helper.h"

class BookingAuditoriumTest : public IOTestFixture<BookingAuditorium> {};

TEST_F(BookingAuditoriumTest, SimpleCase) {
  RunTest(
      "Network 75\nArtificialIntelligence 93\nStartup 5\nCyberSecurity "
      "47\nTestStrategy 42\nAlgorithm 74\nDataAnalysis 65",
      "ArtificialIntelligence");
}
