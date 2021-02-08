#include <stdio.h>

int main(){
	int a,n,i,sum,temp;
	scanf("%d%d",&a,&n);
	for(i=0,sum=0,temp=0;i<n;i++){
		temp=temp*10+a;
		sum+=temp;
	}
	printf("%d",sum);
}
