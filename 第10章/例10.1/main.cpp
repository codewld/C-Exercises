#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char ch;
    char filename[10];
    printf("�������ļ�����");
    scanf("%s", filename);
    getchar(); //���ջ��з�
    if ((fp = fopen(filename,"wb")) == NULL){
        printf("����");
        exit(0);
    }
    printf("�������ַ�������#����:");
    ch = getchar();
    while (ch != '#'){
        fputc(ch, fp);
        putchar(ch);
        ch = getchar();
    }
    fclose(fp);
    putchar(10);
    return 0;
}