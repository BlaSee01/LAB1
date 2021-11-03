#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a = 2;
    int b = 2;
    long c = 200;
    float d = 0.2;
    char e = 'A';
    int sum1 = a + b;
    int sum2 = a * c;
    float sum3 = a / d;
    char sum4 = e + a;

    printf("%d + %d = %d\n", a, b, sum1);
    printf("%d * %d = %d\n", a, c, sum2);
    printf("%d / %f = %f\n", a, d, sum3);
    printf("%c + %d = %c\n", e, a, sum4);

    /* Dzialania miedzy w/w typami danych zachodz¹, jesli zmiennej przechowujacej wynik jest typem odpowiadaj¹cym wynikowi
    (tzn. float + int = float, ale float + int != int, bo usunie nam wartosci po przecinku). Dla typu char, dzia³ania wykonuja
    siê, lecz tylko zmieniaja indeks wartoœæ (A+2==c, poniewaæ C jest oddalone od litery A o 2 miejsca).*/

    return 0;
}
