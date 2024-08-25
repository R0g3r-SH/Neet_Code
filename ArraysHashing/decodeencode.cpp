#include <iostream>
#include <bits/stdc++.h>

string encode(vector<string> &strs)
{
    string out = "";

    for (string word : strs)
    {
        out.append(to_string(word.size()) + "#" + word);
    }
    return out;
}

vector<string> decode(string s)
{
    vector<string> out;

    int idx = 0;
    string steps = "";
    while (idx < s.size())
    {

        if (s[idx] == '#')
        {
            string curr = "";

            int stepsInt = stoi(steps);

            for (int i = 0; i < stepsInt + 1; i++)
            {
                if (s[idx+i] != '#')
                {
                    curr.append(1, s[idx + i]);
                }
            }

            out.push_back(curr);

            idx = idx + stepsInt+1;
            steps = "";
        }

        steps.append(1, s[idx]);
        idx++;
    }

    return out;
}

int main()
{
    vector<string> input = {"we", "say", ":", "yes"};
    decode(encode(input));
}
