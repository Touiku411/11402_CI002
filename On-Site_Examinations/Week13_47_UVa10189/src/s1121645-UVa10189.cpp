#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

//00 01
//10 11
//-1 -1 , -1 1, 1 -1, 1 1

int dx[8] = { -1, 1, 0, 0, -1, -1,1, 1 };
int dy[8] = { 0, 0, -1, 1, -1, 1, -1, 1 };
int main()
{
	int m, n;
	int cnt = 1;
	while (cin >> m >> n && (m != 0 && n != 0)) {
		cout << "Field #" << cnt++ << ":\n";
		vector<string> grid(m);
		for (int i = 0; i < m; ++i) {
			cin >> grid[i];
		}
		//for (auto i : grid)cout << i << endl;
		vector<vector<int>> vec(m, vector<int>(n, 0));
		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j) {
				if (grid[i][j] == '*') {
					for (int k = 0; k < 8; ++k) {
						int rx = i + dx[k];
						int ry = j + dy[k];
						if (rx >= 0 && rx < m && ry >= 0 && ry < n && grid[rx][ry] != '*')
							vec[rx][ry] += 1;
					}
				}
			}
		}
		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j) {
				if (grid[i][j] == '*')cout << '*';
				else cout << vec[i][j];
			}
			cout << '\n';
		}
		cout << '\n';
	}
}
//
//相同+ 1 
//最大