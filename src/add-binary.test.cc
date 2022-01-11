#include <gtest/gtest.h>

#include "./add-binary.hpp"

// Demonstrate some basic assertions.
TEST(FactorialTest, BasicAssertions)
{
  Solution sol;
  // Expect two strings not to be equal.
  EXPECT_EQ(sol.addBinary("10", "01"), "11");
  EXPECT_EQ(sol.addBinary("10", "10"), "100");
  EXPECT_EQ(sol.addBinary("0", "0"), "0");
  EXPECT_EQ(sol.addBinary("1010", "1011"), "10101");

  EXPECT_EQ(sol.addBinary("10100000100100110110010000010101111011011001101110111111111101000000101111001110001111100001101",
                          "110101001011101110001111100110001010100001101011101010000011011011001011101111001100000011011110011"),
            "10101");
}