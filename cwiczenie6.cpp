/**********************
**** Cwiczenie 6 ******
**********************/

#include <stdio.h>
#include <cstdlib>

int main(int argc, char **argv)
{
    ////////////// Cwiczenie 6.1 ////////////////////

    printf("\tCwiczenie 6.1\n");
    printf("\nProgram sumuje N dowolnych liczb rzeczywistych\n");
    int check;
    double suma, n;
    suma = 0;

    while(1)
    {
        printf("Podaj liczbe: ");
        check = scanf("%lg", &n);
        fflush(stdin);
        if(check != 1)
            break;
        suma += n;
    }

    printf("Suma liczb wynosi: %g", suma);

    ////////////// Cwiczenie 6.2 ////////////////////

    printf("\n\n\tCwiczenie 6.2\n");
    printf("\nProgram liczy sume kolejnych wyrazow ciagu\n");
    double ciag = 0;
    double kolejny = 0;

    for(int n = 1; n < 10; n++)
    {
        kolejny = 1.0/(n*(n+1));
        if(kolejny <= 0.0001)
            break;
        ciag += kolejny;
    }
    printf("\nSuma ciagu wynosi %g", ciag);

    ////////////// Cwiczenie 6.4 ////////////////////

    printf("\n\n\tCwiczenie 6.4\n");
    printf("\nProgram sprawdza nierownosc n^3 + 20n < 3n^2 + 370\n");
    printf("Podaj przedzial <a, b>: ");
    int a, b;
    double zdanie, teza;
    scanf("%u %u", &a, &b);
    fflush(stdin);
    for(a; a <= b; a++)
    {
        zdanie = a*a*a+20*a;
        teza = 3*(a*a)+370;
        if(zdanie >= teza)
            printf("Liczba %u nie spelnia nierownosci\n", a);
    }
    

    ///////////////////////////////////////////////

    system("pause");
    return 0;
}