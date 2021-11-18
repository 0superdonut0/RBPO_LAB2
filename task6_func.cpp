#include <iostream>
double f(double x, double y)
{
	return floor(((sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x))) * 10000) / 10000;
}