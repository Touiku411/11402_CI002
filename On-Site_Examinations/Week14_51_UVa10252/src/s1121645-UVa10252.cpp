#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str1, str2;
    while(getline(cin, str1) && getline(cin, str2)){
        map<char, int> m1;
        map<char, int> m2;
        
        for(char& c: str1){
            m1[c]++;
        }
        for(char& c: str2){
            m2[c]++;
        }
        auto i = m1.begin();
        auto j = m2.begin();
        while(i != m1.end() && j != m2.end()){
            if(i->first == j->first){
                int m = min(i->second, j->second);
                while(m--){
                    cout << i->first;
                }
                i++;
                j++;
            }
            else if(i->first < j->first){
                i++;
            }
            else{
                j++;
            }
        }
        cout << '\n';
    }
}

