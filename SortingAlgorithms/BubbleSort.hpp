//
//  BubbleSort.hpp
//  SortingAlgorithms
//
//  Created by Hamkuu Shaw on 6/8/16.
//  Copyright © 2016 hamkuu. All rights reserved.
//

#ifndef BubbleSort_hpp
#define BubbleSort_hpp

#include <stdio.h>
#include <vector>

template <typename T>
void Swap (T & a, T & b) {
    
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
    
}

template <typename T>
void BubbleSort (std::vector<T> & array) {
    
    for (int i=0; i<(array.size()-1); ++i) {
        
        for (int j=0; j<(array.size()-i-1); ++j) {
            
            if (array[j] > array[j+1]) {
                
                Swap(array[j], array[j+1]);
                
            }
            
        }
        
    }
    
}

#endif /* BubbleSort_hpp */
