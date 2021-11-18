#include <iostream>
#include <math.h>
double f(double x, double y);
void main()
{
	using namespace std;
	{
		double x = 0.25, y = 2;
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
		cout << "f=" << f(x, y) << endl;
	}
	double x, y;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	cout << "f=" << f(x, y) << endl;

}
double f(double x, double y)
{
	return floor(((sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x))) * 10000) / 10000;
}