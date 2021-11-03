#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    float b = 0.5;
    int c = 15;
    float d = 1.5;

    int konw1 = (int)d;
    printf("Float (1.5) to Int: %d\n" , konw1);
    float konw2 = (float)a;
    printf("Int (5) to Float: %f\n" , konw2);
    float dziel1 = a/c;
    printf("%d / %d = %f\n" , a , c , dziel1);
    int dziel2 = c/a;
    printf("%d / %d = %d\n" , c , a , dziel2);
    float dziel3 = (float)a/b;
    printf("%d / %f = %f\n" , a , b , dziel3);
    float dziel4 = (float)a/c;
    printf("%d / %d = %f\n" , a , c , dziel4);


    return 0;
}
