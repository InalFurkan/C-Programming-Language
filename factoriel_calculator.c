//HourtohourCodetocode
#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int a,b;
	int counter = 1;
	
	printf("Please enter the number that you want to learn it's factoriel: ");
	scanf("%d",&b);
	
	for(a = 1; a <= b; a++)
	{
		counter = counter * a;
	}
	
	printf("The factorial value of the number %d is: %d\n",b,counter);
	
	system("PAUSE");
	
		
	return 0;
}
