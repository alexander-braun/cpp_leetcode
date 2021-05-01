#include <vector>

class Solution {
public:
    bool threeConsecutiveOdds(std::vector<int>& arr) {
        int curr = 0;
        for (auto el : arr) {
            if (el % 2 != 0) {
                curr++;
                if (curr == 3) {
                    return true;
                }
            }
            else {
                curr = 0;
            }
        }
        return false;
    }
};