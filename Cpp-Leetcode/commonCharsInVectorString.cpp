

// https://leetcode.com/problems/find-common-characters/
// bit too slow

#include <algorithm>
#include <vector>
#include <string>

class Solution {
public:
    std::vector<std::string> commonChars(std::vector<std::string>& A) {

        std::vector<std::vector<char>> split = {};

        for (int i = 0; i < A.size(); ++i) {
            std::vector<char> curr = {};

            for (int j = 0; j < A[i].length(); ++j) {
                curr.push_back(A[i][j]);
            }

            split.push_back(curr);
        }

        int i = 0;
        std::vector<std::string> lettersFound;

        for (int j = 0; j < split[0].size(); ++j) {
            char currentChar = split[0][j];
            int currentFind = 0;

            for (int x = 1; x < split.size(); ++x) {
                bool found = find(split[x].begin(), split[x].end(), currentChar) != split[x].end();
                if (found) {
                    currentFind++;
                    auto index = find(split[x].begin(), split[x].end(), currentChar) - split[x].begin();
                    split[x].erase(split[x].begin() + index, split[x].begin() + index + 1);
                }
            }

            if (currentFind == A.size() - 1) {

                std::string s(1, currentChar);
                lettersFound.push_back(s);
            }
            i++;
        }

        return lettersFound;
    }
};