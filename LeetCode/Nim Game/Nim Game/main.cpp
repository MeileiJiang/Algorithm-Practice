//
//  main.cpp
//  Nim Game
//
//  Created by Meilei Jiang on 12/27/15.
//  Copyright © 2015 Meilei Jiang. All rights reserved.
//

#include <iostream>

using namespace std;

// I can win when n mod 4 != 0
class Solution{
private:
    int n; //size of heap
public:
    bool canWinNim(int n){
        return !(n%4 == 0);
    }
    void Answer(){
        if (canWinNim(n)) {
           cout << "I can win Nim!\n";
        }
        else{
           cout << "I cannot win Nim!\n";
        }
    }
    Solution(int n){this->n = n;}
    Solution(){};
};

int main() {
    
    Solution sol(10);
    sol.Answer();
    Solution sol2(20);
    sol2.Answer();
    return 0;
}
