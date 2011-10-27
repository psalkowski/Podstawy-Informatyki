/**********************
**** Cwiczenie 5 ******
**********************/

/***************************
jak pozbyc sie tego warrningu?

warning C4996: 'scanf': This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
see declaration of 'scanf'

****************************/

#include <stdio.h>          // biblioteka odpowiedzialna za printf(); itp
#include <cstdlib>          // biblioteka odpowiedzialna za system("pause");

double potega(double x)     // mozna pisac poprostu x^2 albo x*x, ale po co? zaszpanujmy, ze umiemy pisac funkcje ;p
{
    return x*x;
}

int main(int argc, char **argv)
{
    ////////////// Cwiczenie 5.1 ////////////////////

    char tekst[255];
    printf("\tCwiczenie 5.1");
    printf("\nWpisz dowolny tekst: ");
    scanf("%s", &tekst);                    // czy to powinno tak wygladac? moze trzeba dodac printf()?
    fflush(stdin);

    ////////////// Cwiczenie 5.2 ////////////////////

    double a, b;
    printf("\n\n\tCwiczenie 5.2");
    printf("\nProgram policzy pole prostokata \nWpisz wartosc bokow a i b: ");
    scanf("%lg %lg", &a, &b);
    fflush(stdin);
    printf("Pole prostokata ", a*b);
    
    ////////////// Cwiczenie 5.3 ////////////////////

    printf("\n\n\tCwiczenie 5.3");
    printf("\nProgram policzy srednia arytmetyczna z dwoch liczb \nPodaj dwie liczby: ");
    scanf("%lg %lg", &a, &b);
    fflush(stdin);
    printf("Srednia arytmetyczna wynosi %g", (a + b) / 2);
    
    ////////////// Cwiczenie 5.4 ////////////////////

    printf("\n\n\tCwiczenie 5.4");
    double zdanie, teza;
    printf("\nProgram sprawdzi tozsamosc (a+b)*(a-b) = a^2 - b^2 \nPodaj dwie liczby: ");
    scanf("%lg %lg", &a, &b);
    fflush(stdin);
    zdanie = (a+b)*(a-b);
    teza = potega(a) - potega(b);
    
    if(teza == zdanie)          // mozna zrobic to bez zmiennych zdanie i teza zapisujac to tak if(((a+b)*(a-b)) == (potega(a) - potega(b)))
        printf("Tozsamosc (%g+%g)(%g-%g) = %g^2 - %g^2 jest prawdziwa!", a, b, a, b, a, b);
    else printf("Tozsamosc nie jest prawdziwa!");
    
    ////////////// Cwiczenie 5.6 ////////////////////

    printf("\n\n\tCwiczenie 5.6");
    double x;
    double funkcja;
    printf("\nProgram policzy f(x) \nPodaj X: ");
    scanf("%lg", &x);
    fflush(stdin);

    if(x < -5 || x > 5)
    {
        funkcja = potega(x + 5) - 10;
        printf("\nWartosc funkcji wynosi %g\n\n", funkcja);
    } else {
        funkcja = 2 * potega(x) + 3*x - 1;
        printf("\nWartosc funkcji wynosi %g\n\n", funkcja);
    }   

    ///////////////////////////////////////////////

    system("pause");
    return 0;
}
