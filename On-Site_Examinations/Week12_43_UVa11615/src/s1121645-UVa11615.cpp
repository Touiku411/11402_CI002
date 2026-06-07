#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<algorithm>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;cin >> T;
    while(T--){
        int depth, A, B;
        cin >> depth >> A >> B;
        int size = (1ULL << depth) - 1;        
        int m = max(A, B);
        int d = 1;
        int temp = m;
        while(temp * 2 < size){
            temp*= 2;
            d++;
        }
        int remove = (1ULL << d) - 2;
        cout << size - remove << '\n';
    }
    
}
   
