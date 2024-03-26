#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class TimeMap {
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp ,value});
    }
    
    string get(string key, int timestamp) {
        
        if (m.find(key) == m.end()){
            return "";
        }

        int l = 0;
        int r = m[key].size()-1;

        while (l <= r){
            int mid = (l+r) /2;
            int val = m[key][mid].first;

            if (val == timestamp){
                return m[key][mid].second;
            }

            else if ( val < timestamp ){
                l = mid+1;
            }
            else{
                r = mid-1;
            }

        }

        if (r >= 0) {
            return m[key][r].second;
        }

        return "";



        
    }

    private:
        unordered_map<string,vector<pair<int,string>>> m;
};

int main(){



    return 0;
}
