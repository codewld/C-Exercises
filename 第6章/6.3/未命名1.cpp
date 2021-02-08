#include <stdio.h>

int main(){
	int a[3][3];
	int i,j,num=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0,j=0;i<3;i++,j++) num+=a[i][j];
	printf("%d",num);
}
