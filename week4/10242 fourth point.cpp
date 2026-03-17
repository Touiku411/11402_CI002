#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	double x1, y1, x2, y2, x3, y3, x4, y4;
	while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
	{
		double samex, samey;
		double midx, midy;
		if (x1 == x2 && y1 == y2) {
			samex = x1;
			samey = y1;
			midx = (x3 + x4) / 2;
			midy = (y3 + y4) / 2;
		}
		else if (x1 == x3 && y1 == y3) {
			samex = x1;
			samey = y1;
			midx = (x2 + x4) / 2;
			midy = (y2 + y4) / 2;
		}
		else if (x1 == x4 && y1 == y4) {
			samex = x1;
			samey = y1;
			midx = (x3 + x2) / 2;
			midy = (y3 + y2) / 2;
		}
		else if(x2 == x3 && y2 == y3){
			samex = x2;
			samey = y2;
			midx = (x1 + x4) / 2;
			midy = (y1 + y4) / 2;
		}
		else if (x2 == x4 && y2 == y4) {
			samex = x2;
			samey = y2;
			midx = (x1 + x3) / 2;
			midy = (y1 + y3) / 2;
		}
		else {
			//x3 == x4
			samex = x3;
			samey = y3;
			midx = (x1 + x2) / 2;
			midy = (y1 + y2) / 2;
		}
		double a = midx - samex;
		double b = midy - samey;
		cout << fixed << setprecision(3) << samex + 2 * a << " " << samey + 2 * b << endl;
	}

}
