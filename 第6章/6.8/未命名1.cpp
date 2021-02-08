#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,m;
	printf("请输入行数和列数\n");
	scanf("%d%d",&n,&m);
	int **a=(int **)malloc(sizeof(int*)*n);
	int i,j,max,maxj,flag;
	for(i=0;i<n;i++) a[i]=(int*)malloc(sizeof(int)*m);
	printf("请依次输入数据\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		max=a[i][0];
		maxj=0;
		for(j=0;j<m;j++){   
			if(max<a[i][j]){
				max=a[i][j];
				maxj=j;
			}
	    }
	    flag=0;
	    for(j=0;j<n;j++) if(a[j][maxj]<a[i][maxj]) flag++;
	    if(flag==0) printf("第%d行%d列的%d是鞍点\n",i,maxj,a[i][maxj]);
	    else  printf("第%d行没有鞍点\n",i);
	}	
}
