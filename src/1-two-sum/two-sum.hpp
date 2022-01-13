// Solution for https://leetcode.com/problems/two-sum/

#include <vector>
#include <unordered_map>

#define u_short unsigned short

using namespace std;

class Solution
{
public:
    vector<int> twoSum_Ethalon(vector<int> &nums, int target) {
        vector<int> res;
        unordered_map<int, u_short> hash;
        for (u_short i = 0; i < nums.size(); i++) {
            if (hash.find(target - nums[i]) != hash.end()) {
                return {i, hash[target - nums[i]]};
            } else {
                hash[nums[i]] = i;
            }
        }
        return {};
    }

    vector<int> twoSum(vector<int> &nums, int target)
    {

        u_short fIdx,
            sIdx;
        int fValue, sValue, sTarget;

        for (u_short i = 0; i < nums.size(); i++)
        {
            fIdx = i;
            fValue = nums[fIdx];
            sTarget = target - fValue;
            if (!hash.count(fValue))
            {
                hash[fValue] = fIdx;
            }
            if (hash.count(sTarget) && hash[sTarget] != fIdx)
            {
                res.push_back(fIdx);
                res.push_back(hash[sTarget]);
                return res;
            }

            if (!fIdx)
            {
                for (u_short j = fIdx + 1; j < nums.size(); j++)
                {
                    sIdx = j;
                    sValue = nums[sIdx];

                    if (fValue + sValue == target)
                    {
                        res.push_back(fIdx);
                        res.push_back(sIdx);
                        return res;
                    }

                    if (!hash.count(sValue))
                    {
                        hash[sValue] = sIdx;
                    }
                }
            }
        }
        return res;
    }
};
