#include <math.h>
#include "func.h"

double x, y;

void f()
{
	y = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}
