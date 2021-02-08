#include <stdio.h>

int main(){
    int i;
    char a[20], b[20];
    printf("«Î ‰»Î£∫\n");
    //gets_s(a, 9);
    scanf("%s",a);
    printf("«Î ‰»Î£∫\n");
    //gets_s(b, 9);
    scanf("%s",b);
    for (i = 0; i < 10 && a[i] != 0 && b[i] != 0; i++){
        if(a[i] != b[i]){
            printf("%d", a[i]-b[i]);
            return 0;
        }
    }
    printf("%d", a[i]-b[i]);
}