#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, m, n, i;
	
	scanf("%lf %lf %lf",&a,&b,&c);
	
	i = b*b-4*a*c;

	if( i<0 ){
		printf("data erro\n");
	}else if( i==0 ){
		m = -b*1.0/(2*a);
		printf("%.2f\n",m);
	}else if( i>0 ){
		m = (-b*1.0+sqrt(i))/(2.0*a);
		n = (-b*1.0-sqrt(i))/(2.0*a);
		printf("%.2f %.2f\n",m,n);

	}

	return 0;
}
