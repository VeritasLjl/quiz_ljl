//
//  Quicksort.h
//  MTH9815_quiz
//
//  Created by 廖佳珑 on 11/22/22.
//

#ifndef Quicksort_h
#define Quicksort_h
#include<vector>
using namespace std;

template<typename T>
void QuickSort(T *arr, int size){
        if(size<=1)return;
        int p=0;
        int q=size-1;
        while(p<q){
            while(p<q && arr[q]>=arr[0]){
                q--;
            }
            while(p<q && arr[p]<=arr[0]){
                p++;
            }
            if(p!=q) swap(arr[p],arr[q]);
        }
        swap(arr[p],arr[0]);
        QuickSort(arr,p);
        QuickSort(arr+p+1,size-p-1);
}
#endif /* Quicksort_h */
