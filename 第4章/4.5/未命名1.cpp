#include <stdio.h>

int main(){
	int a,i;
	printf("������\n");
	scanf("%d",&a);
	while(a>=1000){
		printf("�������\n����������\n");
		scanf("%d",&a);
	}
	for(i=1;i*i<=a;i++);
	i--;
	printf("%d",i);
} 
