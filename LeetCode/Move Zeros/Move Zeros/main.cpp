//
//  main.cpp
//  Move Zeros
//
//  Created by Meilei Jiang on 12/28/15.
//  Copyright © 2015 Meilei Jiang. All rights reserved.
//

#include <iostream>
#include <vector>
//Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

//For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

//Note:
//You must do this in-place without making a copy of the array.
//Minimize the total number of operations.

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p = 0; //current position
        int pr = -1; // rear of '0' sequence
        while( p< nums.size()-1){
            if(nums[p] != 0) p++;
            else{
                if(pr == -1) pr = p;
                if(nums[p+1]!=0) {
                    nums[pr] = nums[p+1];
                    nums[p+1] = 0;
                    pr++;
                    p++;
                }
                else p++;
            }
        }
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> nums = {4,2,4,0,0,3,0,5,1,0};
    Solution solution;
    for (int i = 0; i < nums.size(); i++) {
        cout << "nums[" <<i<<"] = " <<nums[i] << endl;
    }
    solution.moveZeroes(nums);
    for (int i = 0; i < nums.size(); i++) {
        cout << "new nums[" <<i<<"] = " <<nums[i] << endl;
    }
    return 0;
}
