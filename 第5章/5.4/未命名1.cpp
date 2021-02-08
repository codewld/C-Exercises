#include <stdio.h>
#include <string.h>

int main(){
	char temp[100];
	int i;
	for(i=0;i<100;i++) temp[i]='\0';
	int len,a=0,b=0,c=0,d=0;
	printf("qingshuru\n");
	gets(temp);
	/*for(i=0;temp[i]!='\0';i++){
		printf("%d %c\n",temp[i],temp[i]);
	}*/
	
	for(i=0;temp[i]!='\0';i++){
		if('A'<=temp[i]&&temp[i]<='Z') {
			a++;
		}
		else if('a'<=temp[i]&&temp[i]<='z') a++;
		else if(temp[i]==' ') b++;
		else if('0'<=temp[i]&&temp[i]<='9') c++;
		else d++;
	}
	printf("%d %d %d %d",a,b,c,d);
}
