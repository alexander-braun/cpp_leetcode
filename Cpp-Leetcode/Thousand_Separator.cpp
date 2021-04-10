// https://leetcode.com/problems/thousand-separator/


#include <iostream>
using std::cout;

#include <string>
using std::string;
using std::to_string;

class Solution {
public:
    string thousandSeparator(int n) {
        string ofNum = to_string(n);
        int len = ofNum.length();

        if (len < 4) {
            return ofNum;
        }

        for (int i = len - 3; i > 0; i -= 3) {
            ofNum.insert(i, ".");
        }

        return ofNum;
    }
};