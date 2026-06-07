#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int cnt = 1;
    int t;
    while (cin >> t && t != 0)
    {
        cout << "Scenario #" << cnt++ << '\n';
        map<int, int> m;
        for(int team_id = 0; team_id < t; ++team_id){
            int n; cin >> n;
            for(int i = 0; i < n; ++i){
                int x; cin >> x;
                m[x] = team_id;
            }
        }
        queue<int> q[1001];
        queue<int> main_q;
        string line;
        while (cin >> line)
        {
            if(line == "ENQUEUE"){
                int x; cin >> x;
                int id = m[x];
                if(q[id].empty()){
                    main_q.push(id);
                }
                q[id].push(x);
                
            }
            else if(line == "DEQUEUE"){
                int current_team = main_q.front();

                cout << q[current_team].front() << '\n';
                q[current_team].pop();
                
                if(q[current_team].empty()){
                    main_q.pop();
                }
            }
            else if(line == "STOP"){
                break;
            }
        }
        cout << '\n';
    }
    
}
// {101,102,103}{201,202,203}
