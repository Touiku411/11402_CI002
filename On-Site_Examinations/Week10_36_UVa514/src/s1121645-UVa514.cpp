#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while(cin >> n && n != 0){
        while(true){
             vector<int> vec(n);
            cin >> vec[0];
            if(vec[0] == 0){
                cout << endl;
                break;
            }
            for(int i = 1; i < n; ++i){
                cin >> vec[i];
            }
            vector<int> stk;
            int idx = 0;
            for(int i = 1; i <= n; ++i){
                stk.push_back(i);
                while(!stk.empty() && stk.back() == vec[idx]){
                    idx++;
                    stk.pop_back();
                }
            }
            if(stk.empty()){
                cout << "Yes\n";
            }
            else{
                cout << "No\n";
            }
        }
       
    }
}
