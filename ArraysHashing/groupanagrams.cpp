#include <iostream>
#include <bits/stdc++.h>


string genrateKey(vector<int> keys){

    string out =  "" ;

    for( int key : keys){
        out.append(to_string(key) + "#");
    }   

    return out;
}

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> map;
    vector<vector<string>> result;

    for (string word : strs)
    {
        vector<int> key(26, 0);
        string newKey  = "";
        for (char letter : word)
        {
            int idx = int(letter) - int('a');
            key[idx] =  key[idx] +1 ;
           
        }
        newKey = genrateKey(key);

  
        map[newKey].push_back(word);
   
    }

    for (const auto &pair : map)
    {
        result.push_back(pair.second);
    }

    return result;
}

int main()
{
    // Input: strs = ["eat","tea","tan","ate","nat","bat"]
    // Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

    vector<string> strs = {"bdddddddddd","bbbbbbbbbbc"};

    vector<vector<string>> result = groupAnagrams(strs);

    for (vector<string> words : result)
    {
        cout << "[";
        for (string word : words)
        {
            cout << word;
        }
        cout << "]";
    }

    return 0;
}
