// Solution for https://leetcode.com/problems/add-binary/

#include <bitset>
#include <stdlib.h>
#include <string>

using namespace std;

class Solution {
public:
  char getBit(char n, char k) { return (n & (1 << k)) >> k; }

  string addBinary(string a, string b) {
    const auto aL = a.length();
    const auto bL = b.length();
    const auto maxL = max(aL, bL);
    string res = "";
    char carry = 0;
    for (int i = 0; i < maxL; i++) {
      const char bA = ((i <= aL - 1) && a[aL - 1 - i] == '1') || 0;
      const char bB = ((i <= bL - 1) && b[bL - 1 - i] == '1') || 0;
      const char sum = bA + bB + carry;
      carry = getBit(sum, 1);
      res.insert(0, getBit(sum, 0) ? "1" : "0");
    }
    if (carry)
      res.insert(0, "1");
    return res;
  }
};