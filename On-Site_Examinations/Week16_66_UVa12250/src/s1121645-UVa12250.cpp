// AI生成
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string, string> language;
    language["HELLO"] = "ENGLISH";
    language["HOLA"] = "SPANISH";
    language["HALLO"] = "GERMAN";
    language["BONJOUR"] = "FRENCH";
    language["CIAO"] = "ITALIAN";
    language["ZDRAVSTVUJTE"] = "RUSSIAN";

    string word;
    int tc = 1;

    while (cin >> word && word != "#") {
        cout << "Case " << tc++ << ": ";
        if (language.count(word)) {
            cout << language[word] << '\n';
        } else {
            cout << "UNKNOWN\n";
        }
    }

    return 0;
}
