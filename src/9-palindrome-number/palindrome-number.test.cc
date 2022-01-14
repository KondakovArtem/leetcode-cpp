#include <gtest/gtest.h>

#include "./palindrome-number.hpp"

// Demonstrate some basic assertions.
TEST(PalindromeNumberTest, BasicAssertions) {
  Solution sol;

  EXPECT_EQ(sol.isPalindrome_Ethalon(10), false);
  EXPECT_EQ(sol.isPalindrome_Ethalon(101), true);
  EXPECT_EQ(sol.isPalindrome_Ethalon(11), true);

  EXPECT_EQ(sol.isPalindrome(101), true);
  EXPECT_EQ(sol.isPalindrome(11), true);
  EXPECT_EQ(sol.isPalindrome(10), false);
}