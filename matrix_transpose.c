//HourtohourCodetocode


#include <stdio.h>
#define MAX 100

int main()
{
	int matrix[MAX][MAX];

	int	row, collumn;

	int	i, j, k;
  
	system("COLOR 04");
  
	printf("Enter the amount of rows and collumns: ");
	scanf("%d %d",&row, &collumn);
	printf("Fill the matrix's elements bellow\n");
	
	printf("\n-----------------Matrix------------------\n");
	
	for(i=0; i<collumn; i++)
  	{
		printf("_ ");
  	}
  
  	printf("\n");
  	
	for(i=0; i<row; i++)
	{
  		for(j=0; j<collumn; j++)
		{
  			scanf("%d",&matrix[i][j]);	
		}
	}
		
	
	printf("\n------------Transposed Martix------------\n");
	
	for(i=0; i<collumn; i++)
  	{
  		for(j=0; j<row; j++)
	  		{
  				printf("%d ", matrix[j][i]);
	  		}
	  	printf("\n");
	}
  	
  	printf("\n\n");
  	system("PAUSE");
  	
	return 0;
}
