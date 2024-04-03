#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class TimeMap
{
public:
    TimeMap()
    {
    }

    void set(string key, string value, int timestamp)
    {
        data[key].push_back({value, timestamp});
    }

    string get(string key, int timestamp)
    {

        vector<pair<string, int>> currdata = data[key];
        int l = 0;
        int r = currdata.size() - 1;

        while (l <= r)
        {

            int m = (l + r) / 2;
            int currval = currdata[m].second;

            if (currval == timestamp)
            {
                return currdata[m].first;
            }
            else if (currval > timestamp)
            {
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }

        if (r >= 0)
        {
            return currdata[r].first;
        }

        return "";
    }

    unordered_map<string, vector<pair<string, int>>> data;
};

int main()
{
    // Create a TimeMap object
    TimeMap tm;

    // Set some key-value pairs with timestamps
    tm.set("key1", "value1", 1);
    tm.set("key1", "value2", 2);
    tm.set("key1", "value3", 3);
    tm.set("key1", "value3", 5);



    // Get values for a key at different timestamps and print them

    cout << "Value at timestamp 4: " << tm.get("key1", 4) << endl;

    return 0;
}
