#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int bottom_width,i,j;system("COLOR 4");
	
	printf("Please enter the bottom width of the triangle whose will be drawed: ");
	scanf("%d",&bottom_width);
	
	system("cls");
	
	for(i=1;i<=bottom_width;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
		
	
	return 0;
}
