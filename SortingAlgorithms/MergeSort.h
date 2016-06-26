//
//  MergeSort.h
//  SortingAlgorithms
//
//  Created by Hamkuu Shaw on 6/26/16.
//  Copyright © 2016 hamkuu. All rights reserved.
//

#ifndef MergeSort_h
#define MergeSort_h


void Merge(std::vector<int> & Array, int left, int mid, int right){
    
    int LeftSize = mid - left + 1;
    int RightSize = right - mid;
    
    // tempt arrays
    std::vector<int> LeftArray(LeftSize);
    std::vector<int> RightArray(RightSize);
    
    // for looping
    int i, j, k;
    
    for (i=0; i<LeftSize; ++i) {
        
        LeftArray[i] = Array[left + i];
        
    }
    
    for (j=0; j<RightSize; ++j) {
        
        RightArray[j] = Array[mid + 1 + j];
        
    }
    
    i = 0; j = 0; k = left;
    
    while (i < LeftSize && j < RightSize) {
        
        if (LeftArray[i] <= RightArray[j]) {
            
            Array[k] = LeftArray[i];
            i++;
            
        } else {
            
            Array[k] = RightArray[j];
            j++;
            
        }
        
        k++;
        
    }
    
    while (i < LeftSize) {
        
        Array[k] = LeftArray[i];
        k++;
        i++;
        
    }
    
    while (j < RightSize) {
        
        Array[k] = RightArray[j];
        k++;
        j++;
        
    }
    
    
}

void MergeSort(std::vector<int> & Array, int left, int right) {
    
    if (left < right) {
        
        int mid = left + (right - left) / 2;
        
        MergeSort(Array, left, mid);
        MergeSort(Array, mid+1, right);
        Merge(Array, left, mid, right);
        
    }
    
}

void MyMergeSort(std::vector<int> & Array) {
    
    int RightIndex = (int)Array.size() - 1;
    
    MergeSort(Array, 0, RightIndex);
    
}


#endif /* MergeSort_h */
