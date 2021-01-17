#include <stdio.h>

int main(void){
	
	
	int number,i;
	printf("Enter the number whose divisors are to be calculated: ");
	scanf("%d",&number);
	
	for(i = 1; i <= number; i++)
		if((float)number / i == (number / i))
			printf("%d\n",i);
		
	system("PAUSE");
	
	
	return 0;
}
