#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    int cnt = 1;
    while(cin >> N){
        bool found = false;
        set<int> s;
        vector<int> vec(N);
        for(int i = 0; i < N; ++i){
            cin >> vec[i];
            if (vec[i] < 1) {
                found = true;
            }
            if (i > 0 && vec[i] <= vec[i - 1]) {
                found = true;
            }
        }
        if(!found){
             for(int i = 0; i < N; ++i){
                for(int j = i; j < N; ++j){
                    int sum = vec[i] + vec[j];
                    if(s.find(sum) != s.end()){
                        found = true;
                        break;
                    }
                    s.insert(sum);
                    }
                if(found){
                    break;
                }
                
            }
        }
       
        cout << "Case #" << cnt++ << ": It is";
        if(found){
            cout << " not";
        }
        cout << " a B2-Sequence.\n\n";
    }
}

// 1 2 3
// 2 3 4 4 5 6
// 2 3 4 5 6

// 1 2 4 8
// 2 3 5 9 4 6 10 8 12 16
