#include <stdio.h>

void average(double *p, int n){
    double *p_end;
    double sum = 0, aver;
    p_end = p + n;
    for ( ; p < p_end; p++)    sum += *p;
    aver = sum / n;
    printf("%f\n", aver);
}

void search(double (*p)[4], int n){
    int i;
    printf("第三列的数据是：\n");
    for (i = 0; i < 4; i++)
        printf("%.2f ", p[2][i]);
}

int main(){
    double score[3][4] = {65,67,70,60, 80,87,90,81, 90,99,100,98};
    average(*score, 12);
    search(score, 2);
}