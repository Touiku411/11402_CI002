#include<bits/stdc++.h>
using namespace std;

int main(){
    int d, k;
    while(cin >> d >> k && (d != 0 || k != 0)){
        vector<int> dragons(d);
        vector<int> knights(k);
        for(int i = 0; i < d; ++i)
            cin >> dragons[i];
        for(int i = 0; i < k; ++i)
            cin >> knights[i];

        if(d > k){
            cout << "Loowater is doomed!\n";
            continue;
        }
        sort(dragons.begin(), dragons.end());
        sort(knights.begin(), knights.end());
        int total_cost = 0;
        int i = 0;
        int j = 0;
        while(i < d && j < k){
            if(dragons[i] <= knights[j]){
                total_cost += knights[j];
                i++;
                j++;
            }
            else{
                j++;
            }     
        }
        if(i == d)
            cout << total_cost << '\n';
        else
            cout << "Loowater is doomed!\n";
    }
}