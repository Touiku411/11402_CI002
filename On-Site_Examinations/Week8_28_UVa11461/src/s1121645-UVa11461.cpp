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
        cout << int(sqrt(b)) - int(sqrt(a - 1)) << '\n';
    }
    
    
}
// 1~10 -> 1 4 9 (sqrt(10)個)
// a - b = (x <= b) - (x < a)


