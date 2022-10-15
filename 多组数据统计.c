#include <stdio.h>

int main()
{
	int n,a,b=0,i=1,s=0;
    int max,min;
	double avg;
	
	while(scanf("%d",&n)==1&&n){
        max=-2147483647;
        min=2147483647;
        s=0;
		for(i=0;i<n;i++){
			scanf("%d",&a);
			if(a>max)	max=a;
			if(a<min)	min=a;
			s+=a;
		}
		avg=1.0*s/n;
		
		printf("Case %d:%d %d %.3f\n",++b,min,max,avg);
	}

	return 0;
}
