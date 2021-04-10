// https://leetcode.com/problems/jewels-and-stones/

#include <vector>
#include <string>
using namespace std;

class Solution1 {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<string> uniqueJewels;

        for (int i = 0; i < jewels.length(); i++) {
            string s(1, jewels[i]);
            if (!count(begin(uniqueJewels), end(uniqueJewels), s)) {
                uniqueJewels.push_back(s);
            }
        }

        int jewelCount = 0;
        for (int i = 0; i < stones.length(); i++) {
            string currentChar = stones.substr(i, 1);
            if (count(begin(uniqueJewels), end(uniqueJewels), currentChar) != 0) {
                jewelCount++;
            }
        }

        return jewelCount;
    }
};