#include <stdio.h>

int main(){
	char num[5];
	int i;
	for(i=0;i<5;i++) num[i]=0;
	for(i=0;i<5;i++){
		num[i]=getchar();
		if(num[i]==0) break;
	}
	
	
	
	printf("这是%d位数\n各数字分别是:",i);
	for(i=0;i<5&&num[i]!=0;i++) printf(" %c ",num[i]);
	printf("\n逆序数是:");
	for(i=4;i>=0&&num[i]==0;i--);
	for( ;i>=0;i--) printf("%c",num[i]);
	
} 
