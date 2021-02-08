#include <stdio.h>
#include <stdlib.h>

int main(){
	int temp,i,flag;
	int n;
	scanf("%d",&n);
	int *a=(int *)malloc(sizeof(int)*(n+1));
	for(i=0;i<=n;i++) scanf("%d",&a[i]);
	temp=a[n];
	if(n==1) printf("ÎÞÐèÅÅÐò"); 
	else if(a[0]>a[1]) flag=1;  //½µÐò 
	else flag=0;                //ÔöÐò 
	for(i=n-1;i>=0;i--){
		if(flag==1){
			if(a[i]<temp){
				a[i+1]=a[i];
			}
			else break;
		}else{
			if(a[i]>temp){
				a[i+1]=a[i];
			}
			else break;
	    }
	    
    }
	a[i+1]=temp;
	
	for(i=0;i<=n;i++) printf("%d ",a[i]);
}
