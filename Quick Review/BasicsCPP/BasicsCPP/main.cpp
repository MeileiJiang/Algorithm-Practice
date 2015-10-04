//
//  main.cpp
//  BasicsCPP
//
//  Created by Meilei Jiang on 10/4/15.
//  Copyright © 2015 Meilei Jiang. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


int main(int argc, const char * argv[]) {
    cout << "Hello, World!\n I just want to recall some basics of C++ \n";
    
    const double PI = 3.1415926535;
    
    char myGrade = 'A';
    
    int myAge = 39;
    
    int yourAge;
    
    int largestInt = 2147483647;
    
    float favNum = 3.1415;
    
    double otherfavNum = 28;
    
    cout << "PI = " << PI << endl;
    
    cout << "myGrade is " << myGrade << ". \n My age is " << myAge << endl;
    
    cout << "Favorite Number: " << favNum << endl;
    
    cout << "Other Favorite Number: " << otherfavNum << endl;
    
    cout << "Size of int " << sizeof(myAge) << endl;
    
    cout << "Largest int " << largestInt << endl;
    
    cout << "Put in your age\n";
    
    cin >> yourAge;
    
    cout << "Your age " << yourAge << endl;
    
    switch (yourAge) {
        case 1:
            cout << "You are young!\n";
            break;
        case 2:
            cout << "You are old! \n";
            break;
            
        default:
            cout << "I don't know...\n";
            break;
    }
    string age;
    int intage = 0;
    do{
        cout << "Guess my age between 1 and 100: ";
        cin >> age;
        intage = stoi(age);
        cout << intage << endl;
    }while (intage != 39);
    return 0;
}
