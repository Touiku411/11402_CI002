#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> vec(n);
        for(int i = 0; i < vec.size(); ++i){
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        cout << (vec.back() - vec[0]) * 2 << '\n';
    }
    

   
}
