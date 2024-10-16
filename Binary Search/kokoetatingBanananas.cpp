#include <iostream>
#include <bits/stdc++.h>

int minEatingSpeed(vector<int> &piles, int h)
{
  int l = 1 ; 
  int r = *max_element(piles.begin(),piles.end());
  int res = r ; 

  while (l<=r)
  {

    int k = (l+r) / 2;
    int long hours= 0 ;

    for (int p : piles){
        hours+= ceil((double) p/k);
    }

    if (hours<=h){
        res = min(res,k);
        r = k -1;
    }else{
        l = k +1;
    }

  }

  return res;
  

}

int main()
{

    
   vector<int> piles = {3,6,7,11};
   int h = 8;

   cout<<minEatingSpeed(piles,h);

    return 0 ;
}
