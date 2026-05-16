#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N,Q;
    int cnt = 1;
    while(cin >> N >> Q && (N != 0 && Q != 0)){
        cout << "CASE# " << cnt++ << ":\n";
        multiset<int> s;
        for(int i = 0; i < N; ++i){
            int x; cin >> x;
            s.insert(x);
        }
        while (Q--)
        {
            int d; cin >> d;
            auto it = s.find(d);
            if(it != s.end()){
                cout << d << " found at " << distance(s.begin(), it) + 1<< '\n';
            }
            else{
                cout << d << " not found\n";
            }
        }
        
    }
}
