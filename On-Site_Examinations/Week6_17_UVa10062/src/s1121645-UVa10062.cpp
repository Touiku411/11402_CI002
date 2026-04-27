#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  /*  string s = "123";
    for (int c : s) {
        cout << c << " ";
    }*/
    string input;
    while (getline(cin, input)){
        map<int, int> m;
        for (int c : input) {
            m[c]++;
        }
        vector<pair<int, int>> vec(m.begin(), m.end());
        sort(vec.begin(), vec.end(), [](pair<int, int>&a, pair<int, int>&b){
            if (a.second == b.second)return a.first > b.first;
            else return a.second < b.second;
            });
        for (auto i : vec) {
            cout << i.first << " " << i.second << endl;
        }
        cout << endl;
    }

}
