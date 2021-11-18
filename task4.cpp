#include <iostream>
void f(const double& x, const double& y, double& result);
void main()
{
	using namespace std;
	{
		double x = 0.25, y = 2, result;
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
		f(x, y, result);
		cout << "f=" << result << endl;
	}
	double x, y,result;
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	f(x, y, result);
	cout << "f=" << result << endl;

}
void f(const double& x, const double& y, double& result)
{
	result = floor(((sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x))) * 10000) / 10000;
}
