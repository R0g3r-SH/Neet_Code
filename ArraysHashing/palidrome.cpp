#include <iostream>
#include <bits/stdc++.h>

bool isPalindrome(string s)
{
    string news ;

    for (char c : s ){
        int start = int('a');
        int end = int('a') + 25 ;
        int start2 = int('0');
        int end2 = int('9');
        int curr = tolower(c);
        if (int(curr) >= start2 && int(curr) <= end2 || int(curr)<=end && int(curr)>=start){
            news+=curr;
        }   
    }

    int l  =  0 ;   
    int r =  news.size()-1;

    while ( l<= r)
    {
        char curl = tolower(news[l]);
        char curr = tolower(news[r]);

        if ( curl != curr){
            return false;
        }

        l++ ;
        r --;
    
    }


    return true;

}

int main()
{
    string s ="0P";

    cout<<isPalindrome(s);
    return 0;
}