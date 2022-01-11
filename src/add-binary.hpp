// Solution for https://leetcode.com/problems/add-binary/

#include <string>
#include <stdlib.h>
#include <bitset>

using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        a.pop_back()
        
        int nA = stoi(a, 0, 2);
        int nB = stoi(b, 0, 2);
        int nRes = nA + nB;
        string res = "";
        do
        {
            res.insert(0, nRes & 1 ? "1" : "0");
            nRes = nRes >> 1;
        } while (nRes != 0);
        return res;
    }
};