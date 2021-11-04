#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Podaj dowolna liczbe calkowita n: ");
    scanf("%d",&n);
    printf("LICZBY ZE ZBIORU X={n,n+1,n+2,...,n+10) PODZIELNE PRZEZ 2:\n");

    for(int i = 0 ; i<10 ; i++){
        n+=1;
        if(n%2==0){
            printf("%d\n" , n);
        }
    }

    //  PROGRAM WYPISUJE WSZYSTKIE LICZBY PARZYSTE ZE ZBIORU X={n,n+1,n+2,...,n+10)

    printf("\n");

    int a = 2;
    float b = 0.5 ;
    int c = 7;

    a*=a;
    printf("2*=2, to %d\n" , a);
    a/=b;
    printf("4/=0.5, to %d\n" , a);
    a-=c;
    printf("8-=7, to %d\n" , a);

    return 0;
}
