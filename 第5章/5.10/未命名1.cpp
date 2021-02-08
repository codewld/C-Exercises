#include <stdio.h>

int main(){
	int i;
	double j=1,k=2,temp;
	double sum=0;
	for(i=0;i<20;i++){
		sum+=k/j;
		temp=j;
		j=k;
		k=k+temp;
	}
	printf("%f",sum);
}
