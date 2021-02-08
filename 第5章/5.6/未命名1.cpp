#include <stdio.h>

int main(){
	int n,i,sum=0,temp=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		temp*=i;
		sum+=temp;
	}
	printf("%d",sum);
	return 0;
}
