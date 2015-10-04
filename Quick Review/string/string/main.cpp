//
//  main.cpp
//  string
//
//  Created by Meilei Jiang on 10/4/15.
//  Copyright © 2015 Meilei Jiang. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    
    char happyArray[6] = {'H', 'a', 'p', 'p', 'y', '\0'};
    
    string birthdayString = "Birthday";
    
    cout << happyArray + birthdayString << endl;
    
    string yourname;
    cout << "What is your name ";
    getline(cin, yourname);
    
    string wholename = yourname.assign(yourname);
    cout << "Whole Name is " << wholename << endl;
    
    string firstname = wholename.assign(wholename, 0, 5);
    cout << "First Name is " << firstname << endl;
    
    cout << "Hello " << yourname <<"!" <<endl;
    
    double pi = 3.141519;
    string piguess;
    double piguessDouble;
    
    cout << "What is pi? \n";
    getline(cin, piguess);
    
    piguessDouble = stod(piguess);
    
    if (piguessDouble == pi) {
        
        cout << "You are right! \n";
        
    } else {
        
        cout << "You are wrong! \n";
        
    }
    
    cout << "Size of String: " << piguess.size() << endl;
    cout << "Is string empty? " << piguess.empty() << endl;
    cout << piguess.append(" was your geuss?") << endl;
    
    cout << "Now we look at the comparison of dog and cat! \n";
    
    string dogString = "dog";
    string catString = "cat";
    
    cout << dogString.compare(catString) << endl;
    cout << dogString.compare(dogString) << endl;
    cout << catString.compare(dogString) << endl;
    
    return 0;
    
}