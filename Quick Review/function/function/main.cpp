//
//  main.cpp
//  function
//
//  Created by Meilei Jiang on 12/25/15.
//  Copyright © 2015 Meilei Jiang. All rights reserved.
//

#include <iostream>
#include <string>
#include <unistd.h>
#include <fstream>

using namespace std;

int getFactorial(int number){

    int sum;
    if (number == 1) {
        sum = 1;
    }
    else sum = number * getFactorial(number - 1);
    return sum;
}

int main() {
    cout << getFactorial(10)<<endl;
    
// File I/O
    
    // write a file
    string steveQuote = "A day without sunshine is like, you know, night";
    
    string workingdirectory = getcwd(NULL, 0);
    
    cout << "Current working directory: "<< workingdirectory << endl;
    
    ofstream writer("stevequote.txt");
    
    if (! writer) {
        
        cout << "Error opening file" <<endl;
        return -1;
    } else {
    
        writer << steveQuote << endl;
        writer.close();
    }
    
    ofstream writer2("stevequote.txt", ios::app);
    
    if (! writer2) {
        
        cout << "Error opening file" <<endl;
        return -1;
    } else {
        
        writer2 << "\n -Meilei" << endl;
        writer2.close();
    }
    
    // read a file
    
    char letter;
    
    ifstream reader("stevequote.txt");
    
    if (! reader) {
        cout << "Error opening file \n";
        return -1;
    } else {
        for (int i = 0; ! reader.eof(); i++) {
            reader.get(letter);
            cout << letter;
        }
        
        cout << endl;
        reader.close();
    }

//Exception Handling
    string input;
    int number;
    
    getline(cin, input);
    
    number = stoi(input);
    
    
    try {
        if (number != 0) {
            
            cout <<"number = " << number << endl;
            cout <<"2 / number = " << 2 / (double)number << endl;
        } else throw(number);
    } catch (int number) {
        cout << number << " is not valid \n";
    }
    
    return 0;
}
