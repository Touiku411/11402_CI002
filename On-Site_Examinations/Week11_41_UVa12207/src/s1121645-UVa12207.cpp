#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<algorithm>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int P, C;
    int cnt = 1;
    while(cin >> P >> C){
        if(P == 0 && C == 0)break;
        cout << "Case " << cnt++ << ":\n";
        char line;
        int m = min(P, C);
        list<int> l;
        for(int i = 1; i <= m; ++i){
            l.push_back(i);
        }
        while (C--)
        {
            cin >> line;
            if(line == 'E'){
                int num;
                cin >> num;
                l.remove(num);
                l.push_front(num);
            }
            else if(line == 'N'){
                cout << l.front() << '\n';
                int temp = l.front();
                l.pop_front();
                l.push_back(temp);
            }
        }
        
    }
    
}
// 1
// 2
// 1
// 3
// 2
// // [ 3, 2, 1]
