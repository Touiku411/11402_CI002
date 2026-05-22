#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   int N, S;
   while(cin >> N >> S){
        vector<int> vec(N);
        for(int i = 0; i < N; ++i){
            cin >> vec[i];
        }
        int res = INT_MAX;
        int sum = 0;
        int k = 0;
        for(int i = 0; i < N; ++i){
            sum += vec[i];
            if(sum >= S){
                while(sum >= S){
                    res = min(res, i - k + 1);
                    sum -= vec[k++];
                }         
            }
        }
        if(res != INT_MAX)
            cout << res << '\n';
        else
            cout << 0 << '\n';
   }
    
}
