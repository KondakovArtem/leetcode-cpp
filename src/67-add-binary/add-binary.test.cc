#include <gtest/gtest.h>

#include "./add-binary.hpp"

// Demonstrate some basic assertions.
TEST(AddBinaryTest, BasicAssertions) {
  Solution sol;
  // Expect two strings not to be equal.

  EXPECT_EQ(sol.addBinary("100001101", "100000011011110011"),
            "100000100000000000");
  EXPECT_EQ(sol.addBinary("10", "01"), "11");
  EXPECT_EQ(sol.addBinary("10", "10"), "100");
  EXPECT_EQ(sol.addBinary("0", "0"), "0");
  EXPECT_EQ(sol.addBinary("1010", "1011"), "10101");

  EXPECT_EQ(sol.addBinary("1010000010010011011001000001010111101101100110111011"
                          "1111111101000000101111001110001111100001101",
                          "1101010010111011100011111001100010101000011010111010"
                          "10000011011011001011101111001100000011011110011"),
            "110111101100010011000101110110100000011101000101011001000011011000"
            "001100011110011010010011000000000");
}