#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>

using namespace std;


string name(string s) {
	string out;
	for (char c : s) {
		if (c == ' ')break;
		out += c;
	}
	return out;
}
int main()
{
	int T; cin >> T;
	cin.ignore();
	string s;
	map<string, int> m;
	while (T--) {
		getline(cin, s);	
		m[name(s)]++;
	}
	/*vector<pair<string, int>> vec(m.begin(), m.end());
	sort(vec.begin(), vec.end(), [](pair<string, int> a, pair<string, int> b) {
		return a.second < b.second;
		});*/
	for (auto& i : m) {
		cout << i.first << " " << i.second << endl;
	}
}

