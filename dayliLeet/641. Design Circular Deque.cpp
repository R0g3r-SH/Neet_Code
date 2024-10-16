#include <iostream>
#include <bits/stdc++.h>

class MyCircularDeque {

public:

    deque<int> dq ; 
    int max_size =0;

    MyCircularDeque(int k) {
        this->max_size=k;
    }
    
    bool insertFront(int value) {

        if (dq.size()<max_size-1){
            dq.push_front(value);
            return true;
        }

        return false;


    }
    
    bool insertLast(int value) {

        if (dq.size()<max_size-1){
            dq.push_back(value);
            return true;
        }
        
        return false;
        
    }
    
    bool deleteFront() {

        if (dq.size()>0){
            dq.pop_front();
            return true;
        }
        return false;
        
    }
    
    bool deleteLast() {
        
        if (dq.size()>0){
            dq.pop_back();
            return true;
        }
        return false;
    }
    
    int getFront() {
        return dq.front();
    }
    
    int getRear() {
        return dq.back();
    }   
    
    bool isEmpty() {
        return dq.size() == 0 ; 
    }
    
    bool isFull() {
        return dq.size() == max_size;
    }
};


int main(){

    MyCircularDeque* dq = new MyCircularDeque(3);





    return 0;
}