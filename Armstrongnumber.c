#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a, d, n, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    printf("enter a num :");
    scanf("%d", &a);
    n1 = a % 10;
    n2 = a / 10 - (a / 100) * 10;
    n3 = a / 100 - (a / 1000) * 10;
    n4 = a / 1000 - (a / 10000) * 10;
    n5 = a / 10000 - (a / 100000) * 10;
    n6 = a / 100000 - (a / 1000000) * 10;
    n7 = a / 1000000 - (a / 10000000) * 10;
    n8 = a / 10000000 - (a / 100000000) * 10;
    n9 = a / 100000000 - (a / 1000000000) * 10;
    n10 = a / 1000000000;
    d = log10(a) + 1;
    if (a == pow(n1, d) + pow(n2, d) + pow(n3, d) + pow(n4, d) + pow(n5, d) + pow(n6, d) + pow(n7, d) + pow(n8, d) + pow(n9, d) + pow(n10, d))
    {
        printf("%d is Armstrong number ", a);
    }
    else
    {
        printf("%d is not Armstrong number ", a);
    }

    return 0;
}
