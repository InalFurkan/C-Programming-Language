#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <stdbool.h>


void gotoxy(short x, short y)
{                                                       
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

main(void)
{
	int	input,
		x = 5, y = 5;
	    
	bool	exit = false,
		draw = false;
	    
	    
	while(exit == false)
	{
		gotoxy(0,29);
		printf("drawing.io ~ location (%d,%d)\t", x, y);
		
		if(draw == false)
			printf("drawing mode off\t");
		
		else
			printf("drawing mode on\t");
		
		gotoxy(x,y);
		
		input = getch();
		
		switch(input)
		{
            		case 77: x = (x < 119) ? x + 1 : x; break;
            		case 75: x = (x > 0) ? x - 1 : x; break;
            		case 80: y = (y < 28) ? y + 1 : y; break;
            		case 72: y = (y > 0) ? y - 1 : y; break;
			case 32: draw = (draw == false) ? true : false; break;
       		}    
        
		if(draw == false)
		{
			gotoxy(x,y);
		}
		else
		{
			gotoxy(x,y);
			printf("+");
		}
			
	}
	      
}

