#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;cin>>T;
    while (T--)
    {
        int M,N,Q;
        cin >> M >> N >> Q;
        vector<string> grid(M);
        for(int i =0;i< M ;++i){
            cin >> grid[i];
        }
        cout << M << " " << N << " " << Q << endl;
        while(Q--){
            int row,col;
            cin >> row >> col;
            char cur = grid[row][col];
            int radius = 1;
            while(true){
                if(row - radius < 0 || row + radius >= M || col - radius < 0 || col + radius >= N){
                    break;
                }
                bool isvalid = true;
                for(int i = row - radius; i<= row + radius; ++i){
                    for(int j = col - radius; j<= col+radius;++j){
                        if(cur!= grid[i][j]){
                            isvalid = false;
                            break;
                        }
                    }
                    if(!isvalid)break;
                }
                if(isvalid){
                    radius++;
                }
                else{
                    break;
                }
            }
            cout << (radius - 1) * 2 + 1 << endl;
        }
    }
    
    
}
