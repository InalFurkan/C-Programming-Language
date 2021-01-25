#include <stdio.h>
#include <conio.h>

#define phi 3.14

int main(void)
{
	int radius, circumference, area;
	printf("Enter the radius of the circle: ");
	scanf("%d",&radius);
	
	area = phi * radius * radius;
	circumference = 2 * phi * radius;
	
	printf("\nThe area of the circle: %d\nThe circumference of the circle: %d",area,circumference);
	
	
	getch();
	
	return 0;
}
