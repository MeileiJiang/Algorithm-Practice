//
//  main.cpp
//  Add Digits
//
//  Created by Meilei Jiang on 12/27/15.
//  Copyright © 2015 Meilei Jiang. All rights reserved.
//

#include <iostream>

using namespace std;

class Solution{
public:
    int addDigits(int num) {
        if(num == 0) return 0;
        if(num%9 == 0){
            return 9;
        }else return num%9;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Solution solution;
    cout << solution.addDigits(0) << endl;
    cout << solution.addDigits(15) << endl;
    cout << solution.addDigits(27) << endl;
    return 0;
}
