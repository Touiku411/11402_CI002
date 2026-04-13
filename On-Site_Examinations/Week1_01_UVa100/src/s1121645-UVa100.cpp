#include <iostream>
#include <climits>
using namespace std;

int len(int n){
    int cnt = 1;
    while(n > 1){
        if(n % 2 != 0)
            n = 3 * n + 1;
        else
            n /= 2;
        cnt++;
    }
    return cnt;
}
int main() {
    int i,j;
    while(cin >> i >> j){
        int left,right;
        left = min(i,j);
        right = max(i,j);
        int res = INT_MIN;
        for(int k = left ; k <= right ;++k){
            res = max(res, len(k));
        }
        cout << i << " " << j << " " << res << endl;
    }
}
