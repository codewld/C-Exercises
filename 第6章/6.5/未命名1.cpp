#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int n;
	scanf("%d",&n);
	int *a=(int *)malloc(sizeof(int)*n);
	int *stack=(int *)malloc(sizeof(int)*n);
	int top=-1;
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=0;i<n;i++) stack[i]=a[i];
	top=n-1;
	for(i=0;i<n;i++) a[i]=stack[top--];
	for(i=0;i<n;i++) printf("%d ",a[i]);
	free(stack);
	free(a);
	return 0;
}
