#include <iostream>
#include <bits/stdc++.h>

int converttoMinutes(const string &time)
{
    int h = stoi(time.substr(0, 2));
    int m = stoi(time.substr(3, 2));

    return h * 60 + m;
}

int findMinDifference(vector<string> &timePoints)
{
    vector<int> minutes;

    for (const string &time : timePoints)
    {
        minutes.push_back(converttoMinutes(time));
    }

    sort(minutes.begin(), minutes.end());

    int minDiff = INT_MAX;

    for(int i = 1 ; i < minutes.size(); i++){
        minDiff = min(minDiff, minutes[i] - minutes[i-1]);
    }

    /// calculate the wraparround 

    int wrapdiff =( 1440 + minutes[0] - minutes.back()) % 1400;

    minDiff= min(minDiff,wrapdiff);

    return minDiff;
}   

int main()
{

    vector<string> timePoints = {"23:59", "00:00"};
    cout << findMinDifference(timePoints);
    return 0;
}