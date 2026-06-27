// AI生成
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) {
        int money, garments;
        cin >> money >> garments;

        vector<vector<int>> prices(garments);
        for (int i = 0; i < garments; ++i) {
            int k;
            cin >> k;
            prices[i].resize(k);
            for (int j = 0; j < k; ++j) {
                cin >> prices[i][j];
            }
        }

        vector<vector<bool>> dp(garments + 1, vector<bool>(money + 1, false));
        dp[0][0] = true;

        for (int i = 0; i < garments; ++i) {
            for (int spent = 0; spent <= money; ++spent) {
                if (!dp[i][spent]) {
                    continue;
                }

                for (int price : prices[i]) {
                    if (spent + price <= money) {
                        dp[i + 1][spent + price] = true;
                    }
                }
            }
        }

        int ans = -1;
        for (int spent = money; spent >= 0; --spent) {
            if (dp[garments][spent]) {
                ans = spent;
                break;
            }
        }

        if (ans == -1) {
            cout << "no solution\n";
        } else {
            cout << ans << '\n';
        }
    }

    return 0;
}
