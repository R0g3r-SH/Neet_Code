#include <iostream>

#include <unordered_map>
#include <deque>
using namespace std;
bool isValid(string s)
{
    bool is_valid;
    unordered_map<char, char> map = {
        {'(', ')'},
        {'{', '}'},
        {'[', ']'},
    };

    deque<char> q;

    if (s.size() == 1) return 0; 

    for (int i = 0; i < s.size(); i++)
    {
        if (map[s[i]])
        {
            q.push_back(map[s[i]]);
        }
        else if (q.size() > 0 && s[i] == q.back())
        {
            q.pop_back();
        }else{
            return false;
        }
    }

    return q.size() == 0;
}

int main()
{


    string string_2 = "{[]}";


    cout << isValid(string_2) << endl;


    return 0;
}
