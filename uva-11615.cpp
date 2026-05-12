#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// 7 1 44 -> 125
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		//1 2 4 8 16 ...
		int depth, A, B;
		cin >> depth >> A >> B;
		int size = pow(2, depth) - 1;
		vector<int> tree(size);
		//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
		bool noparent = false;
		if (A * 2 > tree.size() || B * 2 > tree.size()) {
			noparent = true;
		}
		int r = (max(A, B));
		int d = 1;
		int temp = r;
		while (temp * 2 < tree.size()) {
			d++;
			temp *= 2;
		}
		int remove = pow(2, d) - 1;
		if (noparent) cout << tree.size() << endl;
		else cout << tree.size() - remove + 1 << endl;
	}
}

