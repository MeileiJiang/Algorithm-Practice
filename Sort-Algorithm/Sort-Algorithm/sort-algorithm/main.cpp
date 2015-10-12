//
//  main.cpp
//  sort-algorithm
//
//  Created by Meilei Jiang on 10/4/15.
//  Copyright © 2015 Meilei Jiang. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include "merge-sort.hpp"
#include "insertion-sort.hpp"
#include "quick-sort.hpp"

using namespace std;

// Global variable declaration:



int main(){
    int Meilei[10]= {13, 1, 14, 24, 34, 5, 26, 7, 21, 11};
    cout << "Before sorting: \n";
    for (int i = 0; i < 10; i++) {
        cout << "Meilei["<< i <<"] = " << Meilei[i] <<endl;
    }
    
    cout << "Size of Meilei is " << sizeof(Meilei)/sizeof(*Meilei) << endl;
    
    //merge_sort(Meilei, 0, 9);
    //insertion_sort(Meilei, 10);
    quick_sort(Meilei, 0, 9);
    
    cout << "By sorting: \n";
    for (int i = 0; i < 10; i++) {
        cout << "Meilei["<< i <<"] = " << Meilei[i] <<endl;
    }
    
    return 0;
}
