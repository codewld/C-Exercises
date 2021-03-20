#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *in, *out;
    char ch;
    char infile[10];
    char outfile[10];
    printf("请输入读入文件的名字");
    scanf("%s", infile);
    printf("请输入输出文件的名字");
    scanf("%s", outfile);
    if ((in = fopen(infile,"r")) == NULL){
        printf("错误");
        exit(0);
    }
    if ((out = fopen(outfile,"w")) == NULL){
        printf("错误");
        exit(0);
    }
    ch = fgetc(in);
    while (!feof(in)){
        fputc(ch, out);
        putchar(ch);
        ch = fgetc(in);
    }
    putchar('\n');
    fclose(in);
    fclose(out);
    return 0;
}