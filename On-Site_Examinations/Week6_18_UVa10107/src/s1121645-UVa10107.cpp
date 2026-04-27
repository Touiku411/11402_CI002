#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector<int> vec;
	while (cin >> n) {
		int mid = -1;
		auto it = lower_bound(vec.begin(),vec.end(),n);
		vec.insert(it,n);
		int len = vec.size();
		if (len % 2 == 0) {
			mid = (vec[len / 2 - 1] + vec[len / 2]) / 2;
		}
		else {
			mid = vec[len / 2];
		}
		cout << mid << endl;
	}

}
