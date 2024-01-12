#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[0] < v2[0];
}

int carFleet(int target, vector<int> &position, vector<int> &speed)
{

    vector<vector<int>> pos_speed;
    deque<float>
        timeStack;

    for (int i = 0; i < position.size(); i++)
    {
        vector<int> temp = {0, 0};
        temp[0] = position[i];
        temp[1] = speed[i];
        pos_speed.push_back(temp);
    }

    // for (int i = 0; i < position.size(); i++)
    // {
    //     pos_speed.emplace_back(vector<int>{position[i], speed[i]});
    // }


    sort(pos_speed.begin(), pos_speed.end(), sortcol);

    for (int i = pos_speed.size() - 1; i >= 0; i--)
    {

        float temp_time = static_cast<float>(target - pos_speed[i][0]) / pos_speed[i][1];

        timeStack.push_back(temp_time);

        if (timeStack.size() >= 2 && timeStack[timeStack.size() - 1] <= timeStack[timeStack.size() - 2])
        {
            timeStack.pop_back();
        }
    }

    return timeStack.size();
}

int main()
{
    int target = 10;
    vector<int> position = {6, 8};
    vector<int> speed = {3, 2};

    cout << carFleet(target, position, speed);

    return 0;
}