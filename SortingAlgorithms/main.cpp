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
#include "QuickSort.h"

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

template <typename T>
void InputDataIntoVector (std::vector<T> & array) {
    int length;
    printf("Enter number of elements\n");
    scanf("%d", &length);
    
    array.resize(length);
    
    T inputData;
    for (int i=0; i<length; ++i) {
        std::cin >> inputData;
        array[i] = inputData;
        
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    std::vector<double> testArray = {
        8, 2, 12, 0.2, 1.7,
        1.7, 88, 24, 32, 1.1
    };
    
//    std::vector<int> testArray = {
//        8, 2, 12, 2, 197,
//        17, 88, 24, 32, 11
//    };
    
    std::cout << "original size = " << testArray.size() << std::endl;
    
    InputDataIntoVector(testArray);
    
    std::cout << "changed size = " << testArray.size() << std::endl;
    
    PrintArray(testArray);
    
    std::cout << std::endl;
    
    //BubbleSort(testArray);
    QuickSort(testArray);
    
    std::cout << std::endl;
    
    PrintArray(testArray);
    
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
