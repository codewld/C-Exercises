#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
struct Student{
    char name[10];
    int num;
    int age;
    char address[15];
}student[SIZE];

int main(){
    int i;
    FILE *fp;
    if ((fp = fopen("stu.dat", "r")) == NULL){  //用二进制方式打开
        printf("wrong!");
        exit(0);
    }
    for (i = 0; i < SIZE; i++){
        fread(&student[i], sizeof(struct Student), 1, fp);
        printf("%-7s %4d %4d %4s", student[i].name, student[i].num, student[i].age, student[i].address);
    }
    fclose(fp);
    return 0;
}