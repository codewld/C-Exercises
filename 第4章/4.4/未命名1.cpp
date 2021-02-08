#include <stdio.h>

int main(){
	int a,b,c;
	printf("请输入三个数字\n");
	scanf("%d%d%d",&a,&b,&c);
	//a>b?(a>c?printf("%d",a):printf("%d",c)):(b>c?printf("%d",b):printf("%d",c));
	a>b?a>c?printf("%d",a):printf("%d",c):b>c?printf("%d",b):printf("%d",c);
}
