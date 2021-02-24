//HourtohourNotetonote

#include <stdio.h>
#include <string.h>
#define MAX 100
main()
{
	char str[MAX];
	int lenght, i;
	
	printf("Enter a input to lowercase machine:\n=>");
	gets(str);
	lenght = strlen(str);
	
	printf("=>");

	for(i=0; i < lenght; i++)
	{
		if(isupper(str[i]))
			str[i] = tolower(str[i]);	
	}
	
	puts(str);
	getch();
}
