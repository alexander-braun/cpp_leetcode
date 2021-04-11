// https://leetcode.com/problems/number-of-good-pairs/

#include <vector>
using std::vector;

class Solution1 {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int outputCount = 0;
        int len = nums.size();
        for (int i = 0; i < len - 1; i++) {
            for (int j = i + 1; j < len; j++) {
                if (nums[i] == nums[j]) {
                    ++outputCount;
                }
            }
        }

        return outputCount;
    }
};