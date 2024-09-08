#include <iostream>
#include <bits/stdc++.h>

int evalRPN(vector<string> &tokens)
{
    int res ;
    deque<int> numbers;
    set<string> simbols = { "+","-","*","/"};

    for( int i = 0 ; i < tokens.size() ; i++){

        string token = tokens[i];
        if(simbols.count(token))
        {
            int num2 = numbers.back();
            int num1 =numbers[numbers.size()-2];
            int resp;

            if (token == "*"){
                resp = num1*num2;
            }else if (token == "/"){
                resp = round(num1/num2);
            }else if(token == "+"){
                resp = num1 + num2; 
            } else{
                resp = num1 -num2;
            }
            numbers.pop_back();
            numbers.pop_back();
            numbers.push_back(resp);
        }
        else{
            numbers.push_back(stoi(token));
        }

    }



return numbers.back();
}

int main()
{
    vector<string> tokens = {"4","13","5","/","+"};

    cout<<evalRPN(tokens);
    
    return 0;
}