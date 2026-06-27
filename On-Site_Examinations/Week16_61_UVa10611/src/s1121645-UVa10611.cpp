// AI生成
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int q;
    cin >> q;

    while (q--) {
        int query;
        cin >> query;

        auto lower = lower_bound(heights.begin(), heights.end(), query);
        auto upper = upper_bound(heights.begin(), heights.end(), query);

        if (lower == heights.begin()) {
            cout << 'X';
        } else {
            cout << *(--lower);
        }

        cout << ' ';

        if (upper == heights.end()) {
            cout << 'X';
        } else {
            cout << *upper;
        }

        cout << '\n';
    }

    return 0;
}
