#include <stdio.h>

int A;

int power(int);

int main(){
    int b = 3;
    int m;
    int num1, num2;
    printf("������a��m:\n");
    scanf("%d %d", &A, &m);
    num1 = A * b;
    printf("%d * %d = %d\n", A, b, num1);
    num2 = power(m);
    printf("%d��%d�η�=\n", A, m, num2);

}