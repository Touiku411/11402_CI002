// AI生成
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n) {
        vector<vector<int>> a(n, vector<int>(n));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }

        int best = a[0][0];

        for (int top = 0; top < n; ++top) {
            vector<int> col(n, 0);

            for (int bottom = top; bottom < n; ++bottom) {
                for (int j = 0; j < n; ++j) {
                    col[j] += a[bottom][j];
                }

                int current = col[0];
                best = max(best, current);

                for (int j = 1; j < n; ++j) {
                    current = max(col[j], current + col[j]);
                    best = max(best, current);
                }
            }
        }

        cout << best << '\n';
    }

    return 0;
}
