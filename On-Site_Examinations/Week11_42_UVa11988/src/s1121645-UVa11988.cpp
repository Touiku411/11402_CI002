#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<algorithm>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string line;
    while (getline(cin, line))
    {
        list<char> text;
        auto i = text.begin();
        for(char c: line){           
            if(c == '['){
                i = text.begin();
            }
            else if(c == ']'){
                i = text.end();
            }
            else{
                text.insert(i, c);
            }        
        }
        for(char c: text){
            cout << c;
        }
        cout << '\n';
    }
    
}
