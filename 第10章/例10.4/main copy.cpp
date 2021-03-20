#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
struct Student{
    char name[10];
    int num;
    int age;
    char address[15];
}student[SIZE];

void save(){
    FILE *fp;
    int i;
    if ((fp = fopen("stu.dat", "w")) == NULL){  //用二进制方方式打开
        printf("wrong!");
        exit(0);
    }
    for (i = 0; i < SIZE; i++){
        if (fwrite(&student[i], sizeof(struct Student), 1, fp) != 1)  //若函数执行成功，则返回数据项的个数
            printf("wrong!");
    }
    fclose(fp);
}

int main(){
    int i;
    printf("请输入学生的数据:\n");
    for (i = 0; i < SIZE; i++)
        scanf("%s %d %d %s", student[i].name, &student[i].num, &student[i].age, student[i].address);
    save();
    return 0;
}