#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long s, d;
    while( cin >> s >> d){
        while(s < d){
            d-=s;
            s++;
        }
        cout << s << endl;
    }
}
// 1 6
// 2 5
// 3 3

// 3 10
// 4 7
// 5 3
