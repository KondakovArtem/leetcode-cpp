#include <string>

using namespace std;

class Solution {

public:
  // TODO: to slow unfortunately (7x times), replaced by method
  //   unordered_map<char, int> romanMap{
  //       {'I', 1},   {'V', 5},   {'X', 10},   {'L', 50},
  //       {'C', 100}, {'D', 500}, {'M', 1000},
  //   };

  int romanMap(char romanChar) {
    if (romanChar == 'I')
      return 1;
    if (romanChar == 'V')
      return 5;
    if (romanChar == 'X')
      return 10;
    if (romanChar == 'L')
      return 50;
    if (romanChar == 'C')
      return 100;
    if (romanChar == 'D')
      return 500;
    if (romanChar == 'M')
      return 1000;
    return 0;
  }

  int romanToInt(string s) {
    int res = 0;
    char idx = 0;
    int fItem = 0;
    int sItem = 0;

    while (idx < s.size()) {
      fItem = romanMap(s[idx]);
      sItem = (idx != s.size() - 1) ? romanMap(s[idx + 1]) : 0;
      if (sItem == 0 || sItem == fItem || sItem < fItem) {
        res += fItem;
        idx++;
      } else {
        res += sItem - fItem;
        idx += 2;
      }
    }
    return res;
  }

  // Solution from leetcode. Too ugly but fast
  int romanToInt_Fastest(string s) {
    int total = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'I') {
        if ((i + 1) < s.size()) {
          if ((s[i + 1] == 'V') || (s[i + 1] == 'X')) {
            total -= 2;
          }
        }
        total += 1;
      } else if (s[i] == 'V') {
        total += 5;
      } else if (s[i] == 'X') {
        if ((i + 1) < s.size()) {
          if ((s[i + 1] == 'L') || (s[i + 1] == 'C')) {
            total -= 20;
          }
        }
        total += 10;
      } else if (s[i] == 'L') {
        total += 50;
      } else if (s[i] == 'C') {
        if ((i + 1) < s.size()) {
          if ((s[i + 1] == 'D') || (s[i + 1] == 'M')) {
            total -= 200;
          }
        }
        total += 100;
      } else if (s[i] == 'D') {
        total += 500;
      } else if (s[i] == 'M') {
        total += 1000;
      }
    }
    return total;
  }
};