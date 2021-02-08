#include <stdio.h>
int main(){
    int i;
    char a[10], b[10];
    scanf("%s", a);
    for (i = 0; a[i]!= '\0'; i++) b[i]=a[i];
    b[i]='\0';
    for (i = 0; i < 10; i++) printf("%c %d\n", b[i], b[i]);

}