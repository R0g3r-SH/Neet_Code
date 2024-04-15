#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    set<char> repeat;
    int r = 0, res = 0 , l=0; 

    while (r < s.size())
    {

        char rval = s[r];


        if (repeat.find(rval) != repeat.end())
        {
            l ++;
            r=l;
            res = max(static_cast<int>(repeat.size()), res);
            repeat.clear();

        }
        else
        {
            repeat.insert(rval);
            r++;
        }
    }


    res = max(static_cast<int>(repeat.size()), res);
    return res;

}

int main()
{
    string input = "dvdf";

    cout << lengthOfLongestSubstring(input);

    return 0;
}