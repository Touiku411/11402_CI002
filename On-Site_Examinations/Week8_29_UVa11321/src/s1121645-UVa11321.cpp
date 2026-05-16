#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    int N,M;
    while (cin >> N >> M && (N != 0 && M != 0))
    {
        cout << N << " " << M << '\n';
        vector<int> vec(N);
        for(int i = 0; i < N; i++){
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end(), [M](const int a, const int b){
            int mod_A = a % M;
            int mod_B = b % M;
            bool even_A = (a % 2 == 0);
            bool even_B = (b % 2 == 0);

            if(mod_A == mod_B){
                if(even_A && even_B){
                    return a < b;
                }
                else if(!even_A && !even_B){
                    return a > b;
                }
                else{
                    if(!even_A){
                        return true;
                    }
                    else
                        return false;
                }
            }
            else{
                return mod_A < mod_B;
            }
            
        });
        for(int i: vec)cout << i << '\n';
    }
    cout << "0 0\n";
    
}
//odd even ->> odd even
// odd odd -> larger odd
// even even -> smaller even 
