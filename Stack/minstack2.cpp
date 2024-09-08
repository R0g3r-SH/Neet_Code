#include <iostream>
#include <bits/stdc++.h>

class MinStack
{
public:
    deque<int> stackn;
    deque<int> minq ;
    MinStack() {}

    void push(int val)
    {

        stackn.push_front(val);

        if (minq.empty() ||  val<minq.front()){
            minq.push_front(val);
        }else{
            minq.push_front(minq.front());
        }
    }

    void pop()
    {
        minq.pop_front();
        stackn.pop_front();
    }

    int top()
    {
        return  stackn.front();
    }

    int getMin()
    {
        return minq.front();
    }
};

int main()
{
    MinStack minStack = MinStack();

    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout<< minStack.getMin(); // return -3
    minStack.pop();
    cout<<minStack.top();    // return 0
    cout << minStack.getMin(); // return -2

    return 0;
}
