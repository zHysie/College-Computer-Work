#include <stdio.h>

int main()
{
	int n,max=-32767,min=32767,s=0,i=0;
	double avg;
	
	
	while(scanf("%d",&n)!=EOF){
		if(n>max)	max=n;
		if(n<min)	min=n;
		i++;
		s+=n;
	
	}
	avg=s*1.0/i;
	printf("%d %d %.3f",min,max,avg);
	return 0;
}

