#include <stdio.h>

int main()
{
	int n;
	scnaf("%d",&n);
	if(n>=3&&n<=5) 
		printf("Spring");
	else if(n>=6&&n<=7)
		printf("Summer");
	else if(n>=9&&n<=11)
		printf("Autumn");
	else
		printf("Winter");
	
	return 0;
}
