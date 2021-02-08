#include <stdio.h>
#define SIZE 15
int main(){
	int a[SIZE];
	int i,n,low=0,high=SIZE-1,mid;
	for(i=0;i<15;i++) a[i]=i;
	printf("请输入：\n");
	scanf("%d",&n);
	while(low<=high){
		mid=(high-low)/2+low;
		if(a[mid]>n) high=mid-1;
		else if(a[mid]<n) low=mid+1;
		else{
			printf("已找到数字，在第%d位",mid);
			return 0;
		} 
	}
	printf("未找到"); 
}
