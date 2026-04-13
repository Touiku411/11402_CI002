#include <iostream>
using namespace std;

int carrycnt(int n1, int n2){
    int cnt = 0;
    int carry = 0;
    while( n1 > 0 || n2 > 0){
        int a = n1 % 10;
        int b = n2 % 10;
        if( a + b + carry > 9){
            cnt++;
            carry = 1;
        }
        else{
            carry = 0;
        }
        n1 /= 10;
        n2 /= 10;
    }
    return cnt;
}
int main() {
    int n1,n2;
    while (cin >> n1 >> n2){
        if(n1 == 0 && n2 == 0)break;
        int cnt = carrycnt(n1 , n2);
        if( cnt == 0){
            cout << "No carry operation.\n";
        }
        else{
            cout << cnt << " carry operation";
            if(cnt > 1)
                cout << "s";
            cout << ".\n";
        }
    }
    
}
