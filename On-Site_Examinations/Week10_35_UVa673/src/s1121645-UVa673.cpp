#include<iostream>
#include<vector>

using namespace std;

bool isValid(string& line){
    vector<int> vec;
    for(char c: line){
        if(c == '(')vec.push_back(')');
        else if(c == '[')vec.push_back(']');
        else{
            if( vec.empty() || c != vec.back()){
                return false;
            }
            vec.pop_back();
        }
    }
    return vec.empty();
}
int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    cin.ignore();
    while (T--)
    {
        string line;
        getline(cin, line);
        if(isValid(line)){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
}
