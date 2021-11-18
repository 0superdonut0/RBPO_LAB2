#include <iostream>
void f();
double x, y, result;
void main()
{
	using namespace std;
	{
		x = 0.25;
		y = 2;
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
		f();
		cout << "f=" << result << endl;
	}
	cout << "x=";
	cin >> x;
	cout << "y=";
	cin >> y;
	f();
	cout << "f=" << result << endl;

}
void f()
{
	result = floor(((sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x))) * 10000) / 10000;
}