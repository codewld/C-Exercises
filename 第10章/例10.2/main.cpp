#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *in, *out;
    char ch;
    char infile[10];
    char outfile[10];
    printf("����������ļ�������");
    scanf("%s", infile);
    printf("����������ļ�������");
    scanf("%s", outfile);
    if ((in = fopen(infile,"r")) == NULL){
        printf("����");
        exit(0);
    }
    if ((out = fopen(outfile,"w")) == NULL){
        printf("����");
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