// AI生成
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        unordered_map<int, int> cnt;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            ++cnt[x];
        }

        for (int i = 0; i < m; ++i) {
            int x;
            cin >> x;
            --cnt[x];
        }

        int ans = 0;
        for (auto &p : cnt) {
            ans += abs(p.second);
        }

        cout << ans << '\n';
    }

    return 0;
}
