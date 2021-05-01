// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

#include <vector>

class Solution {
public:
    std::vector<int> smallerNumbersThanCurrent(std::vector<int>& nums) {
        std::vector<int> smallerN(nums.size());

        int ind = 0;
        for (auto el : nums) {
            int s = 0;
            for (int i = 0; i < nums.size(); ++i) {
                if (i != ind && nums[i] < el) {
                    s++;
                }
            }
            smallerN[ind] = s;
            ind++;
        }

        return smallerN;
    }
};