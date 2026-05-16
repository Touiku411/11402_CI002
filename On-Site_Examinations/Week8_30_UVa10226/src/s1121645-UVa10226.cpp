#include<iostream>
#include<algorithm>
#include<map>
#include<iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    cin.ignore();
    string temp;
    getline(cin, temp);
    for(int i = 0; i < T; ++i){
        map<string,double> trees;
        string line;
        while (getline(cin, line))
        {
            if(line.empty())break;
            trees[line]++;
        }
        int sum = 0;
        for(auto& i : trees)sum += i.second;
        
        for(auto& i : trees){
            cout << i.first << " " << fixed << setprecision(4) << i.second / sum * 100 << '\n';
        }
        if(i < T - 1)cout << '\n';
        
    }

}
