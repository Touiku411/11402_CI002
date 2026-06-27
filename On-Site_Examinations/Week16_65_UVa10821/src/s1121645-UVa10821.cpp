// AI生成
#include <bits/stdc++.h>
using namespace std;

void build(int l, int r, int h)
{
    if (l > r) {
        return;
    }

    int maxRightNodes = h - 1 >= 31 ? r - l : min(r - l, (1 << (h - 1)) - 1);
    int root = max(l, r - maxRightNodes);

    cout << ' ' << root;
    build(l, root - 1, h - 1);
    build(root + 1, r, h - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, h;
    while (cin >> n >> h) {
        if (h <= 0 || h > n || n > (1 << min(h, 30)) - 1) {
            cout << "Impossible.\n";
        } else {
            build(1, n, h);
            cout << '\n';
        }
    }

    return 0;
}
