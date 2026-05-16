#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    int a, b;
    while (cin >> a >> b && (a != 0 && b != 0))
    {
        int cnt = 0;
        for(int i = a; i <= b; ++i){
            if(sqrt(i) == int(sqrt(i))){
                cnt++;
            }
        }
        cout << cnt << '\n';

    }
    
    
}




