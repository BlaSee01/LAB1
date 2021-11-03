#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr_album , wiek, suma;

    printf("Podaj wiek: ");
    scanf("%d" , &wiek);
    printf("Nr albumu: ");
    scanf("%d" , &nr_album);

    suma = wiek + nr_album;

    printf("Nazywam sie Jacek Maruszak, mam %d lat, a moj nr albumu to: %d. Lubie grac w pilke nozna i gry komputerowe.");
    printf("\nWartosc zmiennej suma wynosi: %d + %d = %d" , wiek ,nr_album ,suma);
    return 0;
}
