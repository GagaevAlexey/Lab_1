#include <stdio.h>
#include <math.h>

int main()
{
	double x, y;

	x = 5;
	y = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	scanf("%lf", &x);
	y = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	
	system("pause");
	return 0;
}
