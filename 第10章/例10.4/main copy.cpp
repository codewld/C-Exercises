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
    if ((fp = fopen("stu.dat", "w")) == NULL){  //�ö����Ʒ���ʽ��
        printf("wrong!");
        exit(0);
    }
    for (i = 0; i < SIZE; i++){
        if (fwrite(&student[i], sizeof(struct Student), 1, fp) != 1)  //������ִ�гɹ����򷵻�������ĸ���
            printf("wrong!");
    }
    fclose(fp);
}

int main(){
    int i;
    printf("������ѧ��������:\n");
    for (i = 0; i < SIZE; i++)
        scanf("%s %d %d %s", student[i].name, &student[i].num, &student[i].age, student[i].address);
    save();
    return 0;
}