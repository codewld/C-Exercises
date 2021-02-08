#include <stdio.h>

int main(){
	int a[101];
	int i,j;
	for(i=1;i<=100;i++) a[i]=i;
	a[0]=a[1]=0;
	for(i=2;i<=50;i++){
		for(j=i+i;j<=100;j+=i){
			a[j]=0;
		}
	}
	for(i=1;i<=100;i++){
		if(a[i]!=0) printf("%d ",a[i]);
	}
	
}
