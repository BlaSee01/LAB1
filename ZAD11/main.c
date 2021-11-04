#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Podaj liczbe calkowita: \n");
    scanf("%d" , &n);

    int tab [n];
    float srednia = 0;

    for(int i = 1 ; i <= n ; i++){
        printf("Podaj %d liczbe calkowita do liczenia sredniej: " , i);
        scanf("%d" , &tab[i-1]);
        srednia+=tab[i-1];
    }

    printf("Srednia wynosi: %f" , srednia/n);

    return 0;
}
