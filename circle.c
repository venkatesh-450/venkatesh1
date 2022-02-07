#include<stdio.h>
int main() {
	float radius, area, circumference;
	printf("Enter the radius of Circle ");
	scanf("%f", &radius);
	area = 3.14 * radius * radius;
	printf("Area of Circle %f", area);
	cirumference = 2 * 3.14 * radius;
	printf("circumference of circle %f",circumference);
	return 0;
}
