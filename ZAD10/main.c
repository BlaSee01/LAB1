#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Podaj kolejno 3 liczby calkowite: \n");
    scanf("%d" , &a);
    scanf("%d" , &b);
    scanf("%d" , &c);

    if(a==b || a==c || b==c){
        printf("\n1");
    }else{
        printf("\n0");
    }

    return 0;
}
