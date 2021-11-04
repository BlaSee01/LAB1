#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("1. KM -> kW\n2. kW -> KM\n");
    scanf("%d" , &a);

    if(a==1){
        printf("Podaj wartosc w KM:\n");
        scanf("%d" , &b);
        float w = b*0.74;
        printf("Wynik to: %f kW" , w);
    }else if(a==2){
        printf("Podaj wartosc w kW:\n");
        scanf("%d" , &b);
        float w = b*1.36;
        printf("Wynik to: %f KM" , w);
    }else{
        printf("Zly wybor!");
    }

    return 0;
}
