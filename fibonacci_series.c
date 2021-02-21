//HourtohourCodetocode

#include <stdio.h>

main()
{
	int	i = 1,
		a = 0,
		j, temporary, counter;
	
	printf("Enter a number: ");
	scanf("%d",&j);
	
	for(counter = 0; counter < j; counter++)
	{
		printf("%d ",i);
		temporary = i; 
		i += a;
		a = temporary;
		
	}

}
