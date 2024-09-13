#include <iostream>
#include <bits/stdc++.h>

vector<int> dailyTemperatures(vector<int> &temperatures)
{

    vector<int> res(temperatures.size(),0);
    deque<pair<int, int>> dq;


    dq.push_front({temperatures[temperatures.size()-1], temperatures.size()-1});
    

    for (int i = temperatures.size()-2 ; i>=0; i --){


        int curval = temperatures[i];
        int ptr = 0 ;

        while (ptr<dq.size())
        {
            /* code */
            int dqval = dq[ptr].first;
            int dqidx = dq[ptr].second;

            if (dqval>curval){
                int calculateidx = dqidx-i;
                res[i] = calculateidx;
                break;
            }
            ptr ++;
        }

        dq.push_front({curval,i});
 
        
    }


    return res;




}

int main()
{

    vector<int> temperatures = {73,74,75,71,69,72,76,73};

    vector<int> out = dailyTemperatures(temperatures);
    for( int d : out){
        cout<<d<<",";
    }

    //dq : {4,5} ,

    //30,38,30,36,35,40,28]
    
    //res 0,0,2,1,4

    // 


    // Output: [1,4,1,2,1,0,0]
    return 0;
}