// Solution for https://leetcode.com/problems/palindrome-number/

#define u_int unsigned int
#define u_char unsigned char

using namespace std;

class Solution {
public:
  bool isPalindrome(int x) {
    vector<u_char> vList;

    if (x < 0) {
      return false;
    }
    if (x < 10) {
      return true;
    }
    while (x != 0) {
      vList.push_back(x % 10);
      x /= 10;
    }
    auto vSize = vList.size();
    u_int cSize = vSize / 2;
    for (u_int i = 0; i < cSize; i++) {
      if (vList[i] != vList[vSize - 1 - i]) {
        return false;
      }
    }

    return true;
  }

  bool isPalindrome_Ethalon(int x) {

    if (x < 0 || (x % 10 == 0 && x != 0)) {
      return false;
    }
    if (x < 10) {
      return true;
    }
    int reversed = 0;
    while (x > reversed) {
      reversed = reversed * 10 + x % 10;
      x /= 10;
    }
    return x == reversed || x == reversed / 10;
  }
};