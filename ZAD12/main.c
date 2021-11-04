#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;

    printf("Podaj liczbe rzeczywista: \n");
    scanf("%f" , &n);

    int b = n;

    if(n == b){
        printf("Sufit: %d\n" , b);
        printf("Podloga: %d" , b);
    }else{
        printf("Sufit: %d\n" , b+1);
        printf("Podloga: %d" , b);
    }

    return 0;
}
