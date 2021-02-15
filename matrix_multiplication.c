//HourtohourCodetocode

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define MAX 50


int main(void)
{  
	system("COLOR 04");
	int	arows,
  		acollums,
		brows,
		bcollums,
		temp = 0;
  
	int	matrix_a[MAX][MAX],
		matrix_b[MAX][MAX],
		product[MAX][MAX];
  
	bool problem = true;
   
	while(problem == true)
	{
    	system("CLS");
		printf("------------------Matrix Multiplication------------------\n");
		printf("Enter the rows and colums of the matrix a: ");
    	scanf("%d %d", &arows, &acollums);
  
    	printf("Enter the rows and colums of the matrix b: ");
    	scanf("%d %d", &brows, &bcollums);
 
    	if(acollums == brows) 
			problem=false;
    	else
    	{
			printf("Entered matrices cannot multiply\nPress to try again...");
			getch();
    	}  
	}
	int i, j, k;
  
	printf("\nMatrix A\n");
	
	for(i=0; i<arows; i++)
	{
  		for(j=0; j<acollums; j++)
		{
  			scanf("%d", &matrix_a[i][j]);
		}

	}						
	
	printf("\nMatrix B\n");
	
	for(i=0; i<brows; i++)
	{
  		for(j=0; j<bcollums; j++)
	  	{
  			scanf("%d", &matrix_b[i][j]);
	 	}
	  
	}
	
	for(i=0; i<arows; i++)
	{
		for(j=0; j<bcollums; j++)
		{
			for(k=0; k<brows; k++)
			{
				temp += matrix_a[i][k] * matrix_b[k][j];	
			}
		
			product[i][j] = temp;
			temp = 0;
		}
		
	}
	
	printf("\nResultant Matrix\n");
	
	for(i=0; i<arows; i++)
  	{
  		for(j=0; j<bcollums; j++)
	  		{
  				printf("%d ", product[i][j]);
	  		}
	  	printf("\n");
	}
  
	system("PAUSE");
  
	return 0;
}
