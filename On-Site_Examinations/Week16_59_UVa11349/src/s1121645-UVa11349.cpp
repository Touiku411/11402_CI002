#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;cin >> T;
    int cnt = 1;
    while(T--){
        char c1,c2;
        int n;
        cin >> c1 >> c2 >> n;
        vector<vector<long long>> v(n, vector<long long>(n));
        bool isNegative = false;
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < n; ++j){
                cin >> v[i][j];
                if(v[i][j] < 0)isNegative = true;
            }
        }
        bool isvalid = true;
        if(!isNegative){
            int i = 0;
            int j = v.size() - 1;
            while(i <= j){
                for(int k = 0; k < n; ++k){
                    if(v[i][k] != v[j][n - k -1]){
                        isvalid = false;
                        break;
                    }
                }
                if(!isvalid)break;
                i++;
                j--;
            }
        }
        cout << "Test #" << cnt++ << ": ";
        if(!isNegative && isvalid){
            cout << "Symmetric.\n";
        }
        else{
            cout << "Non-symmetric.\n";
        }
    }
 

}