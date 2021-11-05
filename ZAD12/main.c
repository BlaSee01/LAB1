#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;

    printf("Podaj liczbe rzeczywista: \n");
    scanf("%f" , &n);

    int b = n;

    if(n>0){
    if(n == b){
        printf("Sufit: %d\n" , b);
        printf("Podloga: %d" , b);
    }else{
        printf("Sufit: %d\n" , b+1);
        printf("Podloga: %d" , b);
    }
    }else if(n<0){
    if(n == b){
        printf("Sufit: %d\n" , b);
        printf("Podloga: %d" , b);
    }else{
        printf("Sufit: %d\n" , b);
        printf("Podloga: %d" , b-1);
    }
    }else{
        printf("Sufit: %d\n" , 0);
        printf("Podloga: %d" , 0);
    }

    return 0;
}
