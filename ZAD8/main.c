#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, s;


    printf("Podaj liczbe calkowita:\n");
    scanf("%d" , &a);

    for(int i = 1 ; i < a ; i++){
        s+=i;
    }

    printf("Suma mniejszych naturalnych to: %d" , s);

    return 0;
}
