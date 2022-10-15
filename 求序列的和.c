#include <stdio.h>

int main()
{
	int n,i;
	double Y,sum;
	
	scanf("%d",&n);
	i = 1;
	while(i<=2*n){
		sum = 1.0/i-1.0/(i+1);
		Y += sum;
		i+=2;
	}
	printf("%.2lf\n",Y);
	
	return 0;
}
