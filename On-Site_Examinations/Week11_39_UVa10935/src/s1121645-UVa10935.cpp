#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    while(cin >> n && n != 0){
        queue<int> q;
        for(int i = 1; i <= n; ++i){
            q.push(i);
        }
        vector<int> discarded;
        while(q.size() >= 2){
            discarded.push_back(q.front());
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout << "Discarded cards:";
        for(int i = 0; i < discarded.size(); ++i){
            cout << " " << discarded[i] ;
            if(i + 1 < discarded.size())cout << ",";
        }
        cout << "\nRemaining card: " << q.front() << '\n';
    }
}
