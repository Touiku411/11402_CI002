#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

bool cmp(pair<char, int>& a, pair<char, int>&b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second > b.second;
	}
}
int main()
{
	int T; cin >> T;
	cin.ignore();
	map<char, int> m;
	string line;
	while (T--) {
		getline(cin, line);
		for (char c : line) {
			if (isalpha(c)) {
				char up = toupper(c);
				m[up]++;
			}
		}
	}
	vector<pair<char, int>> vec(m.begin(), m.end());
	sort(vec.begin(), vec.end(), cmp);
	for (auto& i : vec) {
		cout << i.first << " " << i.second << endl;
	}
}

