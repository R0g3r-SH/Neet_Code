#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int l = 0, r = 0, res = 0;

    while (r < prices.size())
    {
        int lval = prices[l];
        int rval = prices[r];

        if (lval < rval)
        {
            res = max(res, rval - lval);
        }
        else
        {
            l = r;
        }
        ++r;
    }
    return res;
}

int main()
{

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << maxProfit(prices);

    return 0;
}