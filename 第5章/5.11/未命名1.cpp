#include <stdio.h>

int main(){
	double high=50,way=100;
	int i;
	for(i=0;i<9;i++){
		way+=2*high;
		high/=2;
	}
	printf("%f %f",way,high);
}
