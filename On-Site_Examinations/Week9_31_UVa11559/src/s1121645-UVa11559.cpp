#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int people, budget, hotelnum, n;
    while (cin >> people >> budget >> hotelnum >> n)
    {
        int res = INT_MAX;
        while(hotelnum--){
            bool Bisvalid = true;
            bool Nisvalid = false;
            int money;
            cin >> money;
            if(money*people > budget){
                Bisvalid = false;
            }
            vector<int> vec(n);
            for(int i = 0; i < n; ++i){
                cin >> vec[i];
            }
            if(Bisvalid){
                for(int i : vec){
                    if(i >= people){
                        Nisvalid = true;
                        break;
                    }
                }
            }
            if(Bisvalid && Nisvalid){
                res = min(res, money*people);
            }
        }
        if(res == INT_MAX){
            cout << "stay home\n";
        }
        else{
            cout << res << '\n';
        }
    }
    
}


// Sample Input
// (人) (預算) (接下來2筆飯店資料)
// 3 1000 2 3
// 200
// 0 2 2
// 300
// 27 3 20

// 5 2000 2 4
// 300
// 4 3 0 4
// 450
// 7 8 0 13

// Sample Output
// 900
// stay home
