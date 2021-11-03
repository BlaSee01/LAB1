#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, a, b;

    a=1;

    printf("Podaj liczbe naturalna: ");
    scanf("%d" , &b);

    for (i = 1; i <= b; i++) {
        a*=i;
    }

    printf("Silnia z %d wynosi: %d" , b , a);

    return 0;
}
