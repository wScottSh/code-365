//
//  202301171254.cpp
//  codewars-2023
//  https://www.codewars.com/kata/51ba717bb08c1cd60f00002f/train/cpp
//  Created by Scott Sheppard on 1/17/23.
//

// iterate through the list
// if the next number is not consecutive, += the next number as a string onto that variable (prefixed by a comma)
// if the next number is consecutive, keep iterating until it finds a non-consecutive number, and add the nonconsecutive[i-1] to the end of the number variable, separated by a dash
// return the big long variable string thing

#include <string>
#include <vector>

std::string range_extraction(std::vector<int> args) {
    std::string list = "";
    
    list += std::to_string(*args.begin());
    for (int i = 1; i < args.size(); i++) {
        if (args[i+1] - args[i] == 1) {
            while (<#condition#>) {
                <#statements#>
            }
        } else {
            list += ("," + std::to_string(args[i]));
        }
    }
    
    return list;
}
