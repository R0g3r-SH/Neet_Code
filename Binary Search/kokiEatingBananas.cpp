
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int minEatingSpeed(vector<int> piles, int h)
{
    int l =1;
    int r  = *max_element(piles.begin(),piles.end());
    int result = r;
    

    while (l <= r) {
        int k = (l+r)/2;
        //calculate hours
        long int hours = 0;
        for( int pile : piles){
    
            hours += ceil((double) pile / k);
        } 

        if (hours <= h){
            result = min(k,result);
            r = k-1;
        }
        else{
            l = k+1;
        }

    }

    return  result;

}

int main()
{
    vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    cout << minEatingSpeed(piles,h);
    return 0;
}