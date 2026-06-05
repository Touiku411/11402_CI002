#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

void dfs(string& source, string& target, string& res, stack<char>& stk, int s_idx, int t_idx){

    if(t_idx == target.length()){
        for(int i = 0; i < res.length(); ++i){
            cout << res[i] << " ";
        }
        cout << '\n';
    }
    if(s_idx < source.length()){
        stk.push(source[s_idx]);
        res.push_back('i');
        dfs(source, target, res, stk, s_idx + 1, t_idx);
        res.pop_back();
        stk.pop();
    }
    if(!stk.empty() && stk.top() == target[t_idx]){
        char temp = stk.top();
        stk.pop();
        res.push_back('o');
        dfs(source, target, res, stk, s_idx, t_idx + 1);
        res.pop_back();
        stk.push(temp);
    }
}
int main(){
    string source, target;
    while(cin >> source >> target){
        string res;
        stack<char> stk;
        
        dfs(source, target, res, stk, 0, 0);
    }

    
    
}
