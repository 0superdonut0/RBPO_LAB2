#include <iostream>

void main()
{
    using namespace std;
	{
		double x = 0.25, y = 2, f;
		f = floor(((sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x))) * 10000) / 10000;
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
		cout << "f=" << f << endl;
	}
	double x , y, f;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	f = floor(((sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x))) * 10000) / 10000;
	cout << "f=" << f << endl;

}

