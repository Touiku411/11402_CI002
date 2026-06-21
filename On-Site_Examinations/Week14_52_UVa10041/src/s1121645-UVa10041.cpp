#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; ++i){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int mid = v[n / 2];
        int res = 0;
        for(int i : v){
            res += abs(i - mid);
        }
        cout << res << '\n';
    }
}

