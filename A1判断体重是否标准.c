#include <stdio.h>

int main()
{
	int a,b,n;
	scanf("%d %d",&a,&b);
	n=a-110;
	if(b>=n+5) printf("fat");
	else if(b<=n-5) printf("thin");
	else printf("good");
	
	
	return 0;
}
