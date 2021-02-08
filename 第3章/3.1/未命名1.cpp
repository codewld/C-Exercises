#include <stdio.h>

int main(){
	int i;
	double num=1;
	for(i=1;i<=10;i++) num*=1.07;
	printf("%10.6f",num);
}
