#include <iostream>
#include <bits/stdc++.h>

void generate(int n, int open, int close, string str, vector<string> &res)
{
    // base case
    if (open == n && close == n)
    {
        res.push_back(str);
        return;
    }
    if (open < n)
    {
        generate(n, open + 1, close, str + '(', res);
    }
    if (open > close)
    {
        generate(n, open, close + 1, str + ')', res);
    }
}


vector<string> generateParenthesis(int n)
{
    vector<string> result;

    generate(n, 0, 0, "", result);

    return result;
}


int main()
{
    int n = 3;

    vector<string> genpar = generateParenthesis(n);

    for(string par : genpar){
        cout<<'[';
        cout<<par;
        cout<<']';
    }

}