// AI生成
#include <bits/stdc++.h>
using namespace std;

bool canFill(const vector<int>& vessels, int containers, int capacity)
{
    int used = 1;
    int current = 0;

    for (int vessel : vessels) {
        if (vessel > capacity) {
            return false;
        }

        if (current + vessel > capacity) {
            ++used;
            current = 0;
        }

        current += vessel;
    }

    return used <= containers;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    while (cin >> n >> m) {
        vector<int> vessels(n);
        int left = 0;
        int right = 0;

        for (int i = 0; i < n; ++i) {
            cin >> vessels[i];
            left = max(left, vessels[i]);
            right += vessels[i];
        }

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canFill(vessels, m, mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        cout << left << '\n';
    }

    return 0;
}
