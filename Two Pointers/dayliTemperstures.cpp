#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Given an array of integers temperatures represents the daily temperatures, 
// return an array answer such that answer[i] is the number of days you have to 
// wait after the ith day to get a warmer temperature. 
// If there is no future day for which this is possible, keep answer[i] == 0 instead.


vector<int> dailyTemperatures(vector<int> temperatures)
{

    vector<int> result = vector(temperatures.size(),0);
    vector<vector<int>> stack ;
    int currval ;
    

    for (int i =0 ; i < temperatures.size() ; i++)
    {
        
        currval = temperatures[i];
        
        while (stack.size() != 0  && currval > stack[stack.size()-1][0])
        {
            int stack_idx = stack[stack.size()-1][1];
            result[stack_idx] = i - stack_idx;
            stack.pop_back();

        }
        stack.push_back({temperatures[i],i});
        
    }



    return result;
}

int main()
{

    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};

    vector<int> res = dailyTemperatures(temperatures);

    string out = "";

    out.append("[");

    for (int i = 0; i < res.size(); i++)
    {
        out.append(to_string(res[i]));

        if (i < res.size() - 1)
        {
            out.append(",");
        }
    }

    out.append("]");

    cout << out << endl;

    return 0;
}