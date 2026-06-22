#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; ++i){
            cin >> v[i];
        }
        int cnt = 0;
        for(int i = 0; i < n;){
            if(v[i] == '.'){
                cnt++;
                i += 3;
            }
            else{
                i++;
            }
        }
        cout << cnt << endl;
    }
}