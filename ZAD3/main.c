#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 80567;

    printf("a) \n\n");

    for(int i = n; i<n+15; i++){
        printf("%d \n" , i);
    }

    printf("\nb) \n\n");

    int licznik = 0;
    int m = 80567;

    while(licznik<15){
        if(m%2==0){
        printf("%d \n" , m);
        licznik++;
        m++;
        }else{
        m++;
        }
    }

    printf("\nc) \n\n");

    int l = 80567;
    int licznik2 = 0;

    do{
       if(l%3==0 || l%5==0){
            licznik2++;
            printf("%d\n" , l);
            l++;
       }else{
            l++;
       }
    }while(licznik2<15);

    return 0;
}
