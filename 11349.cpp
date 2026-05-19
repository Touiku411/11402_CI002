#include<iostream>
#include<vector>
using namespace std;

bool isvald(vector<long long>& vec){
    int i = 0;
    int j = vec.size() - 1;

    while (i < j)
    {
        if(vec[i] != vec[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    int cnt = 1;
    while (T--)
    {
        char t1,t2;
        int n;
        cin >> t1 >> t2 >> n;
        vector<long long> vec(n * n);
        bool negative = false;
        for(int i = 0; i < vec.size(); ++i){
            cin >> vec[i];
            if(vec[i] < 0){
                negative = true;
            }
        }
        cout << "Test #" << cnt++ << ": ";
        if(!negative && isvald(vec)){
            cout << "Symmetric.\n";
        }
        else{
            cout << "Non-symmetric.\n";
        }
    }
    

   
}
