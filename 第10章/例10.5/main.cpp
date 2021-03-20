#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp1, *fp2;
    char ch;
    fp1 = fopen("file1.dat", "r");
    fp2 = fopen("file2.dat", "w");
    ch = getc(fp1);  //读入第一个字符
    while (!feof(fp1)){
        putchar(ch);
        ch = getc(fp1);  //读入下一个字符
    }
    putchar('\n');
    rewind(fp1);
    ch = getc(fp1);  //读入第一个字符
    while (!feof(fp1)){
        fputc(ch,fp2);
        ch = getc(fp1);  //读入下一个字符
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}