#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("DZIALANIA NA LICZBACH\n");

    int a = 17;
    int b = 4;

    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    int modulo = a%b;

    printf("Wyniki dzialan na %d oraz %d (w podanej kolejnosci): \n", a, b);
    printf("Dodawanie: %d \n", add);
    printf("Odejmowanie: %d \n", sub);
    printf("Mnozenie: %d \n", mul);
    printf("Modulo (wyciaganie reszty): %d \n", modulo);


    return 0;
}
