#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int T; cin >> T;
	while (T--)
	{
		int n; cin >> n;
		if (n == 0) {
			cout << "Optimal train swapping takes 0 swaps.\n";
			continue;
		}
		vector<int> vec(n);
		for (int i = 0; i < n; ++i) {
			cin >> vec[i];
		}
		int ans = 0;
		for (int i = 0; i < vec.size() - 1; ++i) {
			for (int j = i + 1; j < vec.size(); ++j) {
				if (vec[i] > vec[j]) {
					ans++;
				}
			}
		}
		cout << "Optimal train swapping takes "  << ans << " swaps.\n";
	}
}

