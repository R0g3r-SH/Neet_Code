#include <iostream>
#include <bits/stdc++.h>

int carFleet(int target, vector<int> &position, vector<int> &speed)
{
    deque<double> dq;

    vector<pair<int,int>> poss;


    for (int j =0 ; j<position.size(); j ++){
        poss.push_back(make_pair(position[j],speed[j]));
    }
    //sort 
    sort(poss.begin(), poss.end());

    //traverse in reverse

    for (int i = poss.size() -1 ; i>=0 ; i --){

        double distance = static_cast<double>(target) - static_cast<double>(poss[i].first);
        double time = distance / static_cast<double>(poss[i].second);

        dq.push_back(time);

        if (dq.size()>=2 && dq[dq.size()-1] <= dq[dq.size()-2]){
            dq.pop_back();
        }

    }

    return dq.size();
}

int main()
{
    int target = 10;
    vector<int> position = {1,4};
    vector<int> speed = {3,2};

    cout << carFleet(target,position,speed);




    return 0;
}