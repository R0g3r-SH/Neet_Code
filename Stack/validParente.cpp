#include <iostream>

#include <bits/stdc++.h>

bool isValid(string s)
{

    if (s.size() < 2)
    {
        return false;
    }

    unordered_map<char, char> map = {
        {'}', '{'},
        {']', '['},
        {')', '('}};

    stack<char> stackn;

    for (char c : s)
    {

        if (map.count(c))
        {
          
            if (stackn.empty())
            {
                return false;
            }

            if (stackn.top() != map[c])
            {
                return false;
            }

            stackn.pop();
        }
        else
        {
            stackn.push(c);
        }
    }

    if (stackn.size() == 0)
    {
        return true;
    }

    return false;
}

int main()
{
    string s = "]]";
    cout << isValid(s);

    return 0;
}