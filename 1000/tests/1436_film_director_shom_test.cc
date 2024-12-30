#include "1000/src/1436_film_director_shom.h"

#include <gtest/gtest.h>

TEST(FilmDirectorShomTest, SampleCase) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "2";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  FilmDirectorShom film_director_shom;
  film_director_shom.SetInputs();
  film_director_shom.GenerateNumbers();
  int result = film_director_shom.GetResult();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 1666);
}

TEST(FizzBuzzTest, SampleCase2) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "3";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  FilmDirectorShom film_director_shom;
  film_director_shom.SetInputs();
  film_director_shom.GenerateNumbers();
  int result = film_director_shom.GetResult();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 2666);
}

TEST(FizzBuzzTest, SampleCase3) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "6";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  FilmDirectorShom film_director_shom;
  film_director_shom.SetInputs();
  film_director_shom.GenerateNumbers();
  int result = film_director_shom.GetResult();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 5666);
}

TEST(FizzBuzzTest, SampleCase4) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "187";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  FilmDirectorShom film_director_shom;
  film_director_shom.SetInputs();
  film_director_shom.GenerateNumbers();
  int result = film_director_shom.GetResult();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 66666);
}

TEST(FizzBuzzTest, SampleCase5) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "500";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  FilmDirectorShom film_director_shom;
  film_director_shom.SetInputs();
  film_director_shom.GenerateNumbers();
  int result = film_director_shom.GetResult();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 166699);
}

TEST(FizzBuzzTest, SampleCase6) {
  std::streambuf* orig_cin = std::cin.rdbuf();

  std::string input = "10000";

  std::istringstream iss(input);
  std::cin.rdbuf(iss.rdbuf());

  FilmDirectorShom film_director_shom;
  film_director_shom.SetInputs();
  film_director_shom.GenerateNumbers();
  int result = film_director_shom.GetResult();

  std::cin.rdbuf(orig_cin);

  EXPECT_EQ(result, 2666799);
}