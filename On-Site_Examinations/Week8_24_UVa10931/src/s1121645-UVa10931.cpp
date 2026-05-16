#include<iostream>
#include<string>
#include<bitset>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int I;
    while(cin >> I && I != 0){
        bitset<32> b(I);
        string s = b.to_string();
        s = s.substr(s.find('1'));
        cout << "The parity of " << s << " is " << b.count() << " (mod 2).\n";
    }
}
