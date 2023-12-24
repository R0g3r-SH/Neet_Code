
#include <iostream>
#include <stack>

using namespace std;

class MinStack {

    private:
        stack<int> stk;
        stack<int> stk_min;


    MinStack() {
    }
    
    void push(int val) {
        if (stk.size() > 0 ){
            stk.push(val);

            if (val < stk_min.top()){
                stk_min.push(val);
            }else{
                stk_min.push(stk.top());
            }

        }else{
            stk.push(val);
            stk_min.push(val);
        }
    }
     
    void pop() {
        stk.pop();
        stk_min.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {

        return stk_min.top();
    }
};

int main(){


    return 0;
}