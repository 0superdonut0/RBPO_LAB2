#include "func_1.h"
double x, y, result;
namespace Lepko {

	void f()
	{
		result = floor(((sin(x) + cos(2 * y - x)) / (cos(x) - sin(2 * y - x))) * 10000) / 10000;
	}
}