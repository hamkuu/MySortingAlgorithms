//
//  main.cpp
//  SortingAlgorithms
//
//  Created by Hamkuu Shaw on 6/8/16.
//  Copyright © 2016 hamkuu. All rights reserved.
//

#include <iostream>
#include <vector>

#include "BubbleSort.hpp"

template <typename T>
void PrintArray (std::vector<T> array) {
//    for (int i=0; i<array.size(); ++i) {
//        std::cout << array.at(i) << std::endl;
//    }
    
    for (typename std::vector<T>::iterator it = array.begin();
         it!=array.end(); ++it) {
        std::cout << *it << std::endl;
    }
}



int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    //printf("Enter number of elements\n");
    //scanf("%d", &length);
//    std::vector<double> testArray = {
//        8, 2, 12, 0.2, 1.7,
//        1.7, 88, 24, 32, 1.1
//    };
    
    std::vector<int> testArray = {
        8, 2, 12, 2, 197,
        17, 88, 24, 32, 11
    };
    
    PrintArray(testArray);
    
    BubbleSort(testArray);
    
    std::cout << std::endl;
    
    PrintArray(testArray);
    
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
