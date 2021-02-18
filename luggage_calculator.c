//HourtohourCodetocode

#include <stdio.h>
#include <conio.h>

int main()
{
	
	int	hand_luggage, 
		normal_luggage,
		extra_hand,
		extra_normal;
	
	printf("under 8kg's are free \neach extra 1 kg is +4$\nHow much kg do you have hand luggage: ");
	scanf("%d",&hand_luggage);
	
	printf("\nunder 15kg's are free \neach extra 1kg is +5$\nHow much kg do you have normal luggage: ");
	scanf("%d",&normal_luggage);	
	
	extra_hand = hand_luggage - 8 > 0 ? (hand_luggage - 8) : 0;
	extra_normal = normal_luggage - 15 > 0 ? (normal_luggage - 15) : 0;
	
	printf("\nExtra luggage: %dkg hand luggage and %dkg normal luggage", extra_hand, extra_normal);
	printf("\nTotal Price: (%dkg x 4$) + (%dkg x 5$) = %d$", extra_hand, extra_normal, extra_hand * 4 + extra_normal * 5);
	
	
	getch();
	return 0;
}  
