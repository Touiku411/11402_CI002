#include<bits/stdc++.h>
using namespace std;


void bst(int l, int r, int h){
    if(l > r)return;
    if(l == r){
        cout << " " << l;
        return;
    }
    int max_right_nodes = 0;
    if(h - 1 >= 15){
        max_right_nodes = r - l;
    }
    else{
        max_right_nodes = (1 << (h - 1)) - 1;
    }
    int P = max(l, r - max_right_nodes);
    cout << " " << P;
    bst(l, P - 1, h - 1);
    bst(P + 1, r, h - 1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, H; // 4 3
    while(cin >> N >> H){
        int l = 1;
        int r = N;
        
        bst(1, N, H);
        cout << '\n';
    }
    
}