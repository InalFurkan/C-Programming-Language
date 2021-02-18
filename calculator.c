//HourtohourCodetocode

#include <stdio.h>
#include <conio.h>
#include <stdbool.h>


int main(void)
{
	system("COLOR 04");
	
	int yesNo;
	
	float num1, num2;
	
	bool continuation = true, theEnd = false;
			
	char operation = 0;
	
	while(theEnd == false)
	{
	
		printf("------------Calculator------------\n");
		printf("Enter the first number: ");
		scanf("%f",&num1);

		printf("\nEnter the second number: ");
		scanf("%f",&num2);
	
		printf("----------------------------------\n");
		printf("Please enter the operator symbol\n");
		printf("----------------------------------\n");
	
		while(continuation == true)
		{
			operation = getch();
			if(operation == 43 || operation == 45 || operation == 42 || operation == 47)
			{
				continuation = false;	
			}
			
		}
	
		switch (operation)
		{
			case 43: printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
					break;
			case 45: printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
					break;
			case 42: printf("%.2f x %.2f = %.2f\n", num1, num2, num1 * num2);
					break;
			case 47: printf("%.2f : %.2f = %.2f\n", num1, num2, num1 / num2);
					break;
		}
		
		continuation = true;
		
		printf("\n\nPress r to try again");
		yesNo = getch();
	
		if(yesNo != 114)
			{
				theEnd = true;
			}
		else
			system("CLS");
	}

	
	
	return 0;
}

