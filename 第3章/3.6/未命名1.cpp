#include <stdio.h>

int main(){
	char c[5];
	printf("��������ַ� ��һ��\n");
	for(int i=0;i<5;i++){
		c[i]=getchar();
		getchar();
	}
	for(int i=0;i<5;i++) putchar(c[i]+4);
} 
