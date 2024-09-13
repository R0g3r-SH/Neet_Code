#include <iostream> 
#include <bits/stdc++.h>

vector<int> dailyTemperatures(vector<int> &temperatures)
{

    deque<pair<int,int>> dq;
    vector<int> res(temperatures.size(),0);

    for (int i  = 0 ; i<temperatures.size(); i ++){

        while (dq.size()>0 && dq.back().first<temperatures[i])
        {
            int calidx = i - dq.back().second;
            res[dq.back().second] = calidx;
            dq.pop_back();
        }

        dq.push_back({temperatures[i],i});
    
    }

    return res;


}

int main(){

    //Input: temperatures = [73,74,75,71,69,72,76,73]
   //Output: [1,1,4,2,1,1,0,0]

    vector <int> temperatures = {73,74,75,71,69,72,76,73};

    vector<int> res = dailyTemperatures(temperatures);

    for (int t : res){
        std::cout<<t<<",";
    }

    return 0;

}