#include <stdio.h>

int main(){
	int a,i;
	printf("请输入\n");
	scanf("%d",&a);
	while(a>=1000){
		printf("输入错误\n请重新输入\n");
		scanf("%d",&a);
	}
	for(i=1;i*i<=a;i++);
	i--;
	printf("%d",i);
} 
