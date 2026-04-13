#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;
int main()
{
	stringstream ss;
	cin >> ss.rdbuf();
	string out = ss.str();
	int idx = 0;
	for (char c : out) {
		if (idx % 2 == 0) {
			if (c == '"') {
				cout << "``";
				idx++;
			}
			else {
				cout << c;
			}
		}
		else {
			if (c == '"') {
				cout << "''";
				idx++;
			}
			else {
				cout << c;
			}
		}
	}
}
