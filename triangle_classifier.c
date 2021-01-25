#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b, c;
	printf("Enter the first leght: ");
	scanf("%d",&a);
	printf("Enter the second leght: ");
	scanf("%d",&b);
	printf("Enter the third leght: ");
	scanf("%d",&c);
	

	if(a == b && b==c){
		printf("\nequilateral triangle");
	}
	else if(a==b && b!=c || a==c && a!=b || b==c && b!=a){
		printf("\nisosceles triangle");
	}
	else if(a + b < c || a - b > c){
		printf("\nA Triangle cannot be drawn with the dimensions you have entered");
	}
	else printf("\nscalene triangle");
	
	return 0;
}
