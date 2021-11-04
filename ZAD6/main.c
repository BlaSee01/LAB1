#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Podaj dzielna: \n");
    scanf("%d" , &a);
    printf("Podaj dzielnik: \n");
    scanf("%d" , &b);

    printf("Wynik dzielenia to: %d" , a/b);

    return 0;
}
