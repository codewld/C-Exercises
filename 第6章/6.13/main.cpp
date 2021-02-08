#include <stdio.h>
#include <stdlib.h>


int main(){
    int i, j, len;
    char s1[] = "hello";
    char s2[] = "world";
    for (i = 0; s1[i] != '\0'; i++);
    for (j = 0; s2[j] != '\0'; j++);
    len=i+j+1;
    char *re = (char *)calloc(sizeof(char), len);
    printf("%d\n", len);
    for(i = 0; s1[i] != '\0';i++)  re[i] = s1[i];
    for(j = 0; s2[j] != '\0'; j++) re[i++] = s2[j];
    re[++i] = 0;
    printf("%s",re);
    //for(i = 0; i<=len; i++) printf("%c",re[i]);
}