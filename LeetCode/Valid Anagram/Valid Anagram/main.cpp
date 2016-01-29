//
//  main.cpp
//  Valid Anagram
//
//  Created by Meilei Jiang on 12/28/15.
//  Copyright © 2015 Meilei Jiang. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return 0;
        if(s.length() == 0) return 1;
        int letter[26][2]={0};
        for(int i = 0; i < s.length(); i++){
            letter[s[i]-'a'][0]++;
            letter[t[i]-'a'][1]++;
        }
        for(int j = 0; j < 26; j++){
            if(letter[j][0] != letter[j][1]) return 0;
        }
        return 1;
    }
    
    int titleToNumber(string s) {
        int colNum = 0;
        for(int i = 0; i < s.length(); i++){
            colNum = 26 * colNum + (int)s[i]-(int)'A' + 1;
        }
        return colNum;
    }
    
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()<2) return 0;
        //using hashing chaining to solve this problem
        const int m = 1234;//number of chains
        int index = -1; //index of chain
        vector<int> hash[m];
        for(int i = 0; i < nums.size(); i++ ){
            index = nums[i]%m;
            if(hash[index].size() == 0) hash[index].push_back(nums[i]);
            else{
                for(int j = 0; j< hash[index].size(); j++){
                    if(nums[i] == hash[index][j]) return 1;
                }
                hash[index].push_back(nums[i]);
            }
        }
        return 0;
    }
    int squareSum(int n) {
        int sum = 0;
        int digit = 0;
        while(n > 9){
            digit = n%10;
            sum += digit*digit;
            n = (n-digit)/10;
        }
        sum += n * n;
        return sum;
    }
    bool isHappy(int n) {
        const int m = 1000;
        vector<int> hash[m] = {};
        int flag = 0;
        int hn = squareSum(n);
        int index = 0;
        while(flag == 0){
            cout << "current num:" << hn << endl;
            index = hn%m;
            if(hash[index].size() == 0) hash[index].push_back(hn);
            else {
                for(int i = 0; i < hash[index].size(); i++){
                if(hash[index][i] == hn) {
                    flag = hn;
                    break;
                }
                hash[index].push_back(hn);
                }
            }
            hn = squareSum(hn);
            
        }
        
        return (hn==1);
    }
};


int main() {
    // insert code here...
    
    Solution solution;
    
    cout << solution.isHappy(9999) << endl;
    
    return 0;
}
