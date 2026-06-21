#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    while(cin >> T && T != 0){
        map<vector<int>, int> m;
        int mx = -1;
        while(T--){
            vector<int> v(5);
            for(int i = 0; i < 5; ++i){
                cin >> v[i];
            }
            sort(v.begin(), v.end());
            m[v]++;
            mx = max(mx, m[v]);
        }
        int res = 0;
       
        for(auto& i : m){
            if(i.second == mx){
                res += i.second;
            }
        }
        cout << res << '\n';
    }
}

