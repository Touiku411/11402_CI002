#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N,Q;
    int cnt = 1;
    while(cin >> N >> Q && (N != 0 && Q != 0)){
        cout << "CASE# " << cnt++ << ":\n";
        vector<int> vec(N);
        for(int i = 0; i < N; ++i){
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        while(Q--){
            int x; cin >> x;
            auto it = lower_bound(vec.begin(), vec.end(), x);
            if(it != vec.end() && *it == x){
                cout << x << " found at " << it - vec.begin() + 1 << '\n'; 
            }
            else{
                cout << x << " not found\n";
            }
        }
    }
}
