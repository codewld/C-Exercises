#include <stdio.h>

void decrypt(){  //����
    int i;
    char a[10];
    printf("������Ҫ���ܵ����ݣ�\n");
    scanf("%s", a);
    for(i = 0; a[i] != '\0'; i++){
        if(a[i] < 'a')  a[i] = 'Z' + 'A' - a[i];
        else  a[i] = 'z' + 'a' - a[i];
    }  
    printf("�ѽ���\n");
    printf("%s", a);
}
void encryption(){  //����
    int i;
    char a[10];
    printf("������Ҫ���ܵ����ݣ�\n");
    scanf("%s", a);
    for(i = 0; a[i] != '\0'; i++){
        if(a[i] < 'a')  a[i] = 'Z' + 'A' - a[i];
        else  a[i] = 'z' + 'a' - a[i];
    }  
    printf("�Ѽ���\n");
    printf("%s", a);
}

int main(){
    int i;
    printf("0.���� 1.���� ��ѡ��\n");
    scanf("%d", &i);
    if (!i)  encryption();
    else  decrypt();
}