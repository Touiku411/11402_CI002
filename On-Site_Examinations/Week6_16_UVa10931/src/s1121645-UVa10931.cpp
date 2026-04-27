#include <iostream>
#include <string>
#include <bitset>

using namespace std;

int main()
{
    int I;
    while (cin >> I && I != 0) {
        bitset<32> b(I);
        string bstr = b.to_string();
        bstr = bstr.substr(bstr.find('1'));
        cout << "The parity of " << bstr << " is " << b.count() << " (mod 2).\n";
    }

}
