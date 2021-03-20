#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char ch;
    char filename[10];
    printf("请输入文件名：");
    scanf("%s", filename);
    getchar(); //吸收换行符
    if ((fp = fopen(filename,"wb")) == NULL){
        printf("错误");
        exit(0);
    }
    printf("请输入字符串，以#结束:");
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