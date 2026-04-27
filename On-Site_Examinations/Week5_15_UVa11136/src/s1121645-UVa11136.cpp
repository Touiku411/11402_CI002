#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0)
    {
        multiset<int> set;
        long long sum = 0;
        while (n--)
        {
            int k;
            cin >> k;
            while(k--){
                int x; cin >> x;
                set.insert(x);
            }
            auto min = set.begin();
            auto max = prev(set.end(),1);
            sum += (*max - *min);
            set.erase(min);
            set.erase(max);
        }
        cout << sum << endl;
    }
    
    
    
}
