//
//  QuickSort.h
//  SortingAlgorithms
//
//  Created by Hamkuu Shaw on 6/8/16.
//  Copyright © 2016 hamkuu. All rights reserved.
//

#ifndef QuickSort_h
#define QuickSort_h


template <typename T>
void MySwap (T & a, T & b) {
    
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
    
}

template <typename T>
int SplitArray (std::vector<T> & array, int pivot, int startIndex, int endIndex) {
    
    // the boundary of left section
    int leftBoundary = startIndex;
    // the boundary of right section
    int rightBoundary = endIndex;
    
    while (leftBoundary < rightBoundary) {
        
        while (pivot < array.at(rightBoundary)
               && leftBoundary < rightBoundary) {
            
            rightBoundary--;
            
        }
        
        MySwap(array[leftBoundary], array[rightBoundary]);
        
        while (pivot >= array[leftBoundary]
               && leftBoundary < rightBoundary) {
            
            leftBoundary++;
            
        }
        
        MySwap(array[leftBoundary], array[rightBoundary]);
        
        
    }
    
    return leftBoundary;
    

}

template <typename T>
void QSort (std::vector<T> & array, int startIndex, int endIndex) {

    T pivot = array[startIndex]; // first element on the array
    
    int wall; // separation point index
    
    if (endIndex > startIndex) {
        
        wall = SplitArray(array, pivot, startIndex, endIndex);
        
        array[wall] = pivot;
        
        QSort(array, startIndex, wall-1);
        
        QSort(array, wall+1, endIndex);
        
    }

}

// warpper function
// for better usage experience
template <typename T>
void QuickSort (std::vector<T> & array) {

    QSort (array, 0, (int)array.size()-1);
    
}



#endif /* QuickSort_h */
