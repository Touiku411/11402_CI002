// AI生成
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<char, pair<int, int>> matrix;
    for (int i = 0; i < n; ++i) {
        char name;
        int row, col;
        cin >> name >> row >> col;
        matrix[name] = {row, col};
    }

    string expression;
    while (cin >> expression) {
        stack<pair<int, int>> st;
        long long ans = 0;
        bool error = false;

        for (char ch : expression) {
            if (ch == '(') {
                st.push({-1, -1});
            } else if (isupper(static_cast<unsigned char>(ch))) {
                st.push(matrix[ch]);
            } else if (ch == ')') {
                pair<int, int> right = st.top();
                st.pop();
                pair<int, int> left = st.top();
                st.pop();
                st.pop();

                if (left.second != right.first) {
                    error = true;
                    break;
                }

                ans += 1LL * left.first * left.second * right.second;
                st.push({left.first, right.second});
            }
        }

        if (error) {
            cout << "error\n";
        } else {
            cout << ans << '\n';
        }
    }

    return 0;
}
