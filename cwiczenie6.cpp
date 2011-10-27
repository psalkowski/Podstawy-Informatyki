/**********************
**** Cwiczenie 6 ******
**********************/

#include <stdio.h>
#include <cstdlib>

int main(int argc, char **argv)
{
    ////////////// Cwiczenie 6.1 ////////////////////

    printf("\tCwiczenie 6.1\n");
    printf("\nProgram sumuje N dowolnych liczb rzeczywistych");
    int check;
    double suma, n;
    suma = 0;

    while(1)
    {
        printf("\nPodaj liczbe: ");
        check = scanf("%lg", n);
        fflush(stdin);
        if(check != 1)
            break;
        suma += n;
    }
    printf("Suma liczb wynosi: %g", suma);
    system("pause");
    return 0;
}
