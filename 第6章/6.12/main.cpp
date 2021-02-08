#include <stdio.h>

void decrypt(){  //解密
    int i;
    char a[10];
    printf("请输入要解密的内容：\n");
    scanf("%s", a);
    for(i = 0; a[i] != '\0'; i++){
        if(a[i] < 'a')  a[i] = 'Z' + 'A' - a[i];
        else  a[i] = 'z' + 'a' - a[i];
    }  
    printf("已解密\n");
    printf("%s", a);
}
void encryption(){  //加密
    int i;
    char a[10];
    printf("请输入要加密的内容：\n");
    scanf("%s", a);
    for(i = 0; a[i] != '\0'; i++){
        if(a[i] < 'a')  a[i] = 'Z' + 'A' - a[i];
        else  a[i] = 'z' + 'a' - a[i];
    }  
    printf("已加密\n");
    printf("%s", a);
}

int main(){
    int i;
    printf("0.加密 1.翻译 请选择：\n");
    scanf("%d", &i);
    if (!i)  encryption();
    else  decrypt();
}