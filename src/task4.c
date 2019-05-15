#include <stdio.h>
#include <math.h>

void f();
double x, result;

int main()
{
	scanf("%lf", &x);
	f();

	printf("x = %.4f\n", x);
	printf("result = %.4f\n", result);
	
	system("pause");
	return 0;
}

void f()
{
	result = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
}
