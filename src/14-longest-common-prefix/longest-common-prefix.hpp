// Solution for https://leetcode.com/problems/longest-common-prefix

#include <string>
#include <vector>

#define u_char unsigned char

using namespace std;

class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    string prefix;
    prefix += strs[0];
    auto prefixSize = prefix.size();
    for (u_char i = 1; i < strs.size(); i++) {
      u_char mSize = std::min(strs[i].size(), prefixSize);
      int maxSameIdx = -1;
      for (u_char j = 0; j < mSize; j++) {
        if (prefix[j] == strs[i][j]) {
          maxSameIdx = j;
        } else {
          break;
        }
      }
      if (maxSameIdx == -1) {
        return "";
      }
      prefixSize = maxSameIdx + 1;
    }

    return prefix.substr(0, prefixSize);
  }
};