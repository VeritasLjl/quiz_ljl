//
//  main.cpp
//  MTH9815_quiz
//
//  Created by 廖佳珑 on 11/22/22.
//

#include <iostream>
#include"Quicksort.h"
#include"MaxHeap.h"

int main(int argc, const char * argv[]) {
    int arr[]={8,2,3,5,11,11,4,6};
    QuickSort<int>(arr,8);
    for(int i=0;i<8;i++)cout<<arr[i]<<"    ";
    cout<<endl;
    
    maxHeap<int> h(3);
    for(int i=0;i<6;i++){
        h.Add((i-2)*(i-2));
        h.Print();
        cout<<endl;
    }
    cout<<h.Remove()<<endl;
    cout<<h.Remove()<<endl;
    cout<<h.Remove()<<endl;
    cout<<h.Remove()<<endl;
    cout<<h.Remove()<<endl;

    return 0;
}
