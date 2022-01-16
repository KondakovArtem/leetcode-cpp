#include <gtest/gtest.h>

#include "./longest-common-prefix.hpp"

// Demonstrate some basic assertions.
TEST(LongestCommonPrefix, BasicAssertions) {
  Solution sol;

  vector<string> strs = {"aaa", "aa", "aaa"};
  EXPECT_EQ(sol.longestCommonPrefix(strs), "aa");

  strs = {"abc", "abcdef"};
  EXPECT_EQ(sol.longestCommonPrefix(strs), "abc");

  strs = {"abcdef", "abc"};
  EXPECT_EQ(sol.longestCommonPrefix(strs), "abc");
}
