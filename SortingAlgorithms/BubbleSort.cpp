//
//  BubbleSort.cpp
//  SortingAlgorithms
//
//  Created by Hamkuu Shaw on 6/8/16.
//  Copyright © 2016 hamkuu. All rights reserved.
//

#include "BubbleSort.hpp"

void Swap (double & a, double & b) {
    
    double tmp;
    tmp = a;
    a = b;
    b = tmp;
    
}

void BubbleSort (std::vector<double> & array) {
    
    for (int i=0; i<(array.size()-1); ++i) {
        
        for (int j=0; j<(array.size()-i-1); ++j) {
            
            if (array[j] > array[j+1]) {
                
                Swap(array[j], array[j+1]);
                
            }
            
        }
        
    }
    
}