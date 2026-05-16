#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    map<string,string> m({
        {"HELLO", "ENGLISH"},
        {"HOLA", "SPANISH"},
        {"HALLO", "GERMAN"},
        {"BONJOUR", "FRENCH"},
        {"CIAO", "ITALIAN"},
        {"ZDRAVSTVUJTE", "RUSSIAN"},
    });
    int cnt = 1;
    string input;
    while (cin >> input && input != "#")
    {
        cout << "Case " << cnt++ << ": ";
        if(m.find(input) != m.end()){
            cout << m[input] << '\n';
        }else{
            cout << "UNKNOWN\n";
        }
    }
    
}




