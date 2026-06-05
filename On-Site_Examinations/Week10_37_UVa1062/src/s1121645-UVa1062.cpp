#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int cnt = 1;
    string line;
    while(cin >> line){
        if(line == "end")break;

        vector<vector<char>> vec;
        for(char c: line){
            bool found = false;
            for(auto& i : vec){
                if(i.back() >= c){
                    i.push_back(c);
                    found = true;
                    break;
                }
            }
            if(!found){
                vector<char> temp;
                temp.push_back(c);
                vec.push_back(temp);
                // cout << "開新的 " << c << endl;
            }
        }


        cout << "Case " << cnt++ << ": " << vec.size() << '\n';
    }

}
