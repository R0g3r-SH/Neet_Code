#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool isAnagram(string s, string t)
{

    unordered_map<char, int> map;
    unordered_map<char, int> map2;

    if (s.size() != t.size())
    {
        return false;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (map.count(s[i]))
        {
            map[s[i]] = map[s[i]] + 1;
        }
        else
        {
            map[s[i]] = 1;
        }
    }

    for (int i = 0; i < t.size(); i++)
    {
        if (map2.count(t[i]))
        {
            map2[t[i]] = map2[t[i]] + 1;
        }
        else
        {
            map2[t[i]] = 1;
        }
    }

    for (int i = 0; i < t.size(); i++)
    {
        if (map[s[i]] != map2[s[i]])
        {
            return false;
        }
    }

    return true;
}

int main()
{

    string s = "anagram";
    string t = "nagaram";

    cout << isAnagram(s, t);

    return 0;
}