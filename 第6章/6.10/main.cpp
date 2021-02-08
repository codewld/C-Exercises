#include <stdio.h>
#define LEN 10
int main()
{
    int i, j;
    int numd, numx, numn, numk, numo;
    numd = numx = numn = numk = numo = 0;
    int a[3][LEN];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < LEN; j++)
        {
            a[i][j] = getchar();
            while (a[i][j] == 10)
                a[i][j] = getchar();
            if (a[i][j] <= 'Z' && a[i][j] >= 'A')
                numd++;
            else if (a[i][j] <= 'z' && a[i][j] >= 'a')
                numx++;
            else if (a[i][j] <= '9' && a[i][j] >= '0')
                numn++;
            else if (a[i][j] == 32)
                numk++;
            else
                numo++;
        }
    }
    printf("大写%d 小写%d 数字%d 空格%d 其它%d", numd, numx, numn, numk, numo);
}