#include <iostream>
#include <regex>

using std::string;
using std::regex;
using std::regex_replace;

class Solution1 {
public:
    string defangIPaddr(string address) {
        int len = address.length();
        string word = "";
        for (int i = 0; i < len; i++) {
            string character = address.substr(i, 1);
            if (character == ".") {
                character = "[.]";
            }

            word += character;
        }

        return word;
    }
};

class Solution2 {
public:
    string defangIPaddr(string address) {
        address = regex_replace(address, regex("\\."), "[.]");
        return address;
    }
};