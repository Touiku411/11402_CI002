// AI生成
#include <bits/stdc++.h>
using namespace std;

int p, q, r, s, t, u;

double f(double x)
{
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << fixed << setprecision(4);

    while (cin >> p >> q >> r >> s >> t >> u) {
        double low = 0.0;
        double high = 1.0;

        if (f(low) * f(high) > 0) {
            cout << "No solution\n";
            continue;
        }

        for (int i = 0; i < 100; ++i) {
            double mid = (low + high) / 2.0;
            if (f(low) * f(mid) <= 0) {
                high = mid;
            } else {
                low = mid;
            }
        }

        cout << (low + high) / 2.0 << '\n';
    }

    return 0;
}
