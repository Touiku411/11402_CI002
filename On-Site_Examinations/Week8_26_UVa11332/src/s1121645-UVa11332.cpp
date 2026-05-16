#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    long long n;
    while(cin >> n && n!=0){
        int res = n % 9;
        if(res == 0){
            cout << 9 << endl;
        }
        else{
            cout << res << endl;
        }
    }
    
}




