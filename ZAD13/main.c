#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1 SPOSOB (AAWARYJNA, UZYTKOWNIK MOZE WPISAC ZA DUZA LICZBE)

    int a;

    printf("1) Ilo cyfrowa bedzie liczba: \n");
    scanf("%d" , &a);

    char b [a];

    printf("Podaj liczbe: \n");
    scanf("%s" , &b);

    for(int i = a-1 ; i >=0 ; i--){
        printf("%c" , b[i]);
    }

    printf("\n\n");

    // 2 SPOSOB (OPTYMALNY)

    int c;

    printf("2) Podaj liczbe: \n");
    scanf("%d" , &c);

    while(c!=0){
        printf("%d" , c%10);
        c/=10;
    }

    return 0;
}
