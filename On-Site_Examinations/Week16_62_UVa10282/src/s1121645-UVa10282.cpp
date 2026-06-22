#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string line;
    unordered_map<string, string> m;
    while(getline(cin, line) && !line.empty()){
        stringstream ss(line);
        string s1, s2;
        ss >> s1 >> s2;
        m[s2] = s1;
    }

    string name;
    while(getline(cin, name)){
        if(m.find(name) == m.end())
            cout << "eh\n";
        else cout << m[name] << '\n';
    }
}