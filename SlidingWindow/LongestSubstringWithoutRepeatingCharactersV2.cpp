#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s)
{

    int l = 0 , res = 0 ;
    unordered_set<char> set_val;

    for (int r = 0 ; r < s.size() ; r++){

        while (set_val.find(s[r]) != set_val.end()){
            set_val.erase(s[l]);
            l++;
        }

        set_val.insert(s[r]);
        
        res = max(res, r-l+1);
    }


    return res;

}

int main()
{
    string input = "pwwkew";

    cout << lengthOfLongestSubstring(input);

    return 0;
}