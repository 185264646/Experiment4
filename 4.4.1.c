#include <stdio.h>
#include <math.h>
#define s(a, b, c) (a + b + c) / 2
#define area(s, a, b, c) sqrt(s * (s - a) * (s - b) * (s - c))

int main(void)
{
	float a, b, c, s, area;
	printf("Input three side lengths:");
	scanf("%f%f%f", &a, &b, &c);
	s = s(a, b, c);
	area = area(s, a, b, c);
	printf("The area is: %f", area);
	return 0;
}