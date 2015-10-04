//
//  merge-sort.hpp
//  sort-algorithm
//
//  Created by Meilei Jiang on 10/4/15.
//  Copyright © 2015 Meilei Jiang. All rights reserved.
//

#ifndef merge_sort_hpp
#define merge_sort_hpp

#include <stdio.h>

void merge_sort(int* A, int low, int high);
void merge(int* A, const int low, const int mid, const int high);

#endif /* merge_sort_hpp */
