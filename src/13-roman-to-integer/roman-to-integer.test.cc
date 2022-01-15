#include <gtest/gtest.h>

#include "./roman-to-integer.hpp"

// Demonstrate some basic assertions.
TEST(RomanToInteger, BasicAssertions) {
  Solution sol;

  EXPECT_EQ(sol.romanToInt("III"), 3);
  EXPECT_EQ(sol.romanToInt("LVIII"), 58);
  EXPECT_EQ(sol.romanToInt("MCMXCIV"), 1994);
}

TEST(RomanToInteger, SpeedTest_Fastest) {
  Solution sol;

  for (int i = 0; i < 1000000; i++)
    EXPECT_EQ(sol.romanToInt_Fastest("MCMXCIV"), 1994);
}

TEST(RomanToInteger, SpeedTest) {
  Solution sol;

  for (int i = 0; i < 1000000; i++)
    EXPECT_EQ(sol.romanToInt("MCMXCIV"), 1994);
}
