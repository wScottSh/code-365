//
//  202301170813.cpp
//  codewars-2023
//  https://www.codewars.com/kata/554ca54ffa7d91b236000023/train/cpp
//
//  Created by Scott Sheppard on 1/17/23.
//

#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> deleteNth(std::vector<int> arr, int n)
{
    std::vector<int> newArray; // make a vector for the trimmed array
    std::unordered_map<int, int> intCount; // make an unordered map that counts the number of each number in the array
    for (auto i : arr) { // while loop that goes through the aray
        if (intCount[i] < n) {
            newArray.push_back(i);
            intCount[i]++;
        }
    }
    return newArray;
}

//iterate through the array

int main() {
    std::vector<int> arr = {1,2,3,1,2,1,2,3};
    int n = 2;
    std::vector<int> newArr = deleteNth(arr, n);
    for (auto i : newArr) {
        std::cout << i << " ";
    }
    return 0;
}
