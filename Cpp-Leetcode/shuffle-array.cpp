// https://leetcode.com/problems/shuffle-the-array/

#include <vector>

class Solution {
public:
    std::vector<int> shuffle(std::vector<int>& nums, int n) {
        std::vector<int> first = std::vector<int>(nums.begin(), nums.begin() + n);
        std::vector<int> second = std::vector<int>(nums.begin() + n, nums.end());

        std::vector<int> result;
        for (int j = 0; j < n; ++j) {
            result.push_back(first[j]);
            result.push_back(second[j]);
        }

        return result;
    }
};


// Bit less memory:
class Solution {
public:
    std::vector<int> shuffle(std::vector<int>& nums, int n) {
        std::vector<int> result(nums.size());

        int j = 0;
        for (int i = 0; i < n; i++) {
            result[j] = nums[i];
            result[j + 1] = nums[i + n];
            j += 2;
        }

        return result;
    }
};