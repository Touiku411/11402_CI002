#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		cin.ignore();
		string instruct;
		vector<string> vec;
		int pos = 0;

		while (n--) {
			cin >> instruct;
			if (instruct == "LEFT")	{
				pos--;
				vec.push_back(instruct);
			}
			else if (instruct == "RIGHT") {
				pos++;
				vec.push_back(instruct);
			}
			else {
				string s1;
				int num;
				cin >> s1 >> num;
				if (num > 0) {
					int idx = num - 1;
					vec.push_back(vec[idx]);
					if (vec[idx] == "RIGHT") {
						pos++;
					}
					else {
						pos--;
					}
				}
			}
		}
		cout << pos << endl;
	}
}

