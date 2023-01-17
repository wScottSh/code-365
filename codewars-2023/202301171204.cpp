//
//  202301171204.cpp
//  codewars-2023
//  https://www.codewars.com/kata/56a5d994ac971f1ac500003e/train/cpp
//  Created by Scott Sheppard on 1/17/23.
//

// iterate through the vector of strings
// combine i and i+1 and push it to a new vector
// iterate through the new vector calculating the length of each string
// if the number is higher than the previous high, replace variable longest with the new longest
// return longest

#include <string>
#include <vector>

class LongestConsec
{
public:
    static std::string longestConsec(const std::vector<std::string> &strarr, int k) {
        std::string longestStr = "";
        
        if (k <= 0 || k > strarr.size()) return "";
        for (unsigned long i = 0; i <= strarr.size() - k; i++) {
            std::string concatString;
            for (unsigned long c = i; c < i + k; c++) {
                concatString += strarr[c];
            }
            if (concatString.size() > longestStr.size()) {
                longestStr = concatString;
            }
        }
        
        return longestStr;
    }
};
