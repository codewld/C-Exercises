#include <stdio.h>
#include <math.h>

int main(){
	double a;
	scanf("%lf",&a);
	double x1=a/2,x2;
	x2=(x1+a/x1)/2;
	while(fabs(x2-x1)>=1e-5){
		x1=x2;
		x2=(x1+a/x1)/2;
	}
	printf("%f %f",a,x2);
}
