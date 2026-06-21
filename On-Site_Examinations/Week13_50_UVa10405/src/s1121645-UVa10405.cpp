#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int lcs(string& a, string& b) {
	int m = a.size();
	int n = b.size();
	vector<vector<int>> vec(m + 1, vector<int>(n + 1, 0));
	for (int i = 1; i < m + 1; ++i) {
		for (int j = 1; j < n + 1; ++j) {
			if (a[i - 1] == b[j - 1]) {
				/*cout << "same: " << a[i - 1] << endl;*/
				vec[i][j] = vec[i - 1][j - 1] + 1;
			}
			else {
				vec[i][j] = max(vec[i - 1][j], vec[i][j - 1]);
			}
		}
	}
	/*for (int i = 0; i < m + 1; ++i) {
		for (int j = 0; j < n + 1; ++j) {
			cout << vec[i][j] << ' ';
		}
		cout << endl;
	}*/
	return vec[m][n];
}

int main()
{
	string a, b;
	while (getline(cin, a)) {
		getline(cin, b);
		cout << lcs(a, b) << '\n';
	}
}
//
//相同+ 1 
//最大

//  a b c
//a 1  
//b  
//c 

