#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ile;
    int ndst = 0;

    printf("Ile uczniow pisalo sprawdzian: \n");
    scanf("%d" , &ile);
    int T [ile];

    for(int i = 0 ; i < ile ; i++){
        printf("Ocena ucznia nr %d: " , i+1);
        scanf("%d" , &T[i]);
        if(T[i]==1){
            ndst++;
        }
    }

    float srednia = 0;

    for(int i = 0 ; i < ile ; i++){
        srednia+=T[i];
    }

    srednia/=ile;

    printf("Srednia ocen uczniow to: %f\nLiczba ocen niedostatecznych: %d" , srednia, ndst);

    return 0;
}
