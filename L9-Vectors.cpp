//136. Single Number
//https://leetcode.com/problems/single-number/

#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;  // XOR all numbers
    }
    return result;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};

    cout << "Single number is: " << singleNumber(nums) << endl;

    return 0;
}