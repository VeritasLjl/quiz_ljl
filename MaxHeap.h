//
//  MaxHeap.h
//  MTH9815_quiz
//
//  Created by 廖佳珑 on 11/22/22.
//

#ifndef MaxHeap_h
#define MaxHeap_h
#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class maxHeap{
public:
    T value;
    maxHeap* Left;
    maxHeap* Right;
    maxHeap(T val){
        value = val;
        Left = nullptr;
        Right = nullptr;
    }
    void Add(T ele){
        T temp = value;
        if(ele>value){
            value = ele;
        }
        else{
            temp = ele;
        }
        if(!Left){
            Left = new maxHeap(temp);
        }
        else if(!Right){
            Right = new maxHeap(temp);
        }
        else if(Left->value < Right->value){
            Left->Add(temp);
        }
        else{
            Right->Add(temp);
        }
    }
    T Remove(){
        T ret = value;
        maxHeap* temp = this;
        maxHeap* father = nullptr;
        while(temp->Left||temp->Right){
            father = temp;
            if(!temp->Left)temp=temp->Right;
            else temp=temp->Left;
        }
        value = temp->value;
        if(!father->Left)father->Right=nullptr;
        else father->Left=nullptr;
        temp = this;
//        while((temp->Left&&temp->value<temp->Left->value)||(temp->Right&&temp->value<temp->Right->value)){
//            if(!temp->Left){
//                temp->Right = new maxHeap(temp);
//            }
//            else if(!Right){
//                Right = new maxHeap(temp);
//            }
//            else if(Left->value < Right->value){
//                Left->Add(temp);
//            }
//            else{
//                Right->Add(temp);
//            }
//        }
        return ret;
    }
    void Print(){
        cout<<value<<" ";
        if(Left)Left->Print();
        if(Right)Right->Print();
    }
};




#endif /* MaxHeap_h */
