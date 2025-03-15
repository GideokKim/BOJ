#include "1000/src/1436_film_director_shom.h"

#include "test_headers/test_helper.h"

class FilmDirectorShomTest : public IOTestFixture<FilmDirectorShom> {};

TEST_F(FilmDirectorShomTest, SampleCase) { RunTest("2", "1666"); }

TEST_F(FilmDirectorShomTest, SampleCase2) { RunTest("3", "2666"); }

TEST_F(FilmDirectorShomTest, SampleCase3) { RunTest("6", "5666"); }

TEST_F(FilmDirectorShomTest, SampleCase4) { RunTest("187", "66666"); }

TEST_F(FilmDirectorShomTest, SampleCase5) { RunTest("500", "166699"); }

TEST_F(FilmDirectorShomTest, SampleCase6) { RunTest("10000", "2666799"); }
