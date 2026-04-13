#include <iostream>
#include <string>
#include <vector>
#include <cmath>

//Rene Decartes once said,
//"I think, therefore I am.
//00 01 02 03
//10 11 12 13
//20 21 22 23
using namespace std;
int maxLength(vector<string>& vec) {
	int len = 0;
	for (auto i : vec) {
		int s = i.size();
		len = max(s, len);
	}
	return len;
}
int main()
{
	vector<string> vec;
	string line;
	while (getline(cin, line))
	{
		vec.push_back(line);
	}
	int maxlen = 0;
	maxlen = maxLength(vec);
	for (int j = 0; j < maxlen; j++) {
		for (int i = vec.size() - 1; i >= 0; i--) {
			if (vec[i].size() <= j) {
				cout << " ";
			}
			else {
				cout << vec[i][j];
			}
		}
		cout << endl;
	}
}
