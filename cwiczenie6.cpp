/**********************
**** Cwiczenie 6 ******
**********************/

#include <stdio.h>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{
    ////////////// Cwiczenie 6.1 ////////////////////

    printf("\tCwiczenie 6.1\n");
    printf("\nProgram sumuje N dowolnych liczb rzeczywistych\n");
    int check;
    double suma, n;
    suma = 0;
    n = 0;

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
    double ciag = 0.0;
    double kolejny = 0.0;

    for(int n = 1; n < 10; n++)
    {
        kolejny = 1.0/(n*(n+1));
        if(kolejny <= 0.0001)
            break;
        ciag += kolejny;
    }
    printf("\nSuma ciagu wynosi %g", ciag);

    ////////////// Cwiczenie 6.3 ////////////////////

    printf("\n\n\tCwiczenie 6.3\n");
    printf("\nProgram obliczy warcjancje i obliczenie standardowe sumy 200 losowych liczb rzeczywistych\n");
    const int M = 200;
    double x[M];
    double xs = 0;
    double sigma = 0;
    int i, m=200;

    srand(time(NULL));
    for(i = 0; i < m; i++)
    {
        x[i] = (double)rand()/RAND_MAX;
        xs += x[i];
    }
    xs /= M;

    for(i = 0; i < m; i++)
    {
        sigma += (x[i]-xs)*(x[i]-xs);
    }
    sigma /= m-1.0;
    printf("Wariancja wynosi %g\nOdchylenie wynosi %g", sigma, sqrt(sigma));

    ////////////// Cwiczenie 6.4 ////////////////////

    int a, b;
    double zdanie, teza;
    printf("\n\n\tCwiczenie 6.4\n");
    printf("\nProgram sprawdza nierownosc n^3 + 20n < 3n^2 + 370\n");
    printf("Podaj przedzial <a, b> w postaci liczb naturalnych: ");
    scanf("%u %u", &a, &b);
    fflush(stdin);

    while (a <= 0 || b <= 0)
    {
        printf("Blednie podany przedzial <a, b>. Podaj jeszcze raz: ");
        scanf("%u %u", &a, &b);
        fflush(stdin);
    }
    if(a <= b) {
        for(a; a <= b; a++)
        {
            zdanie = a*a*a+20*a;
            teza = 3*(a*a)+370;
            if(zdanie >= teza)
                printf("Liczba %u nie spelnia nierownosci\n", a);
        }
    } else {
        for(b; b <= a; b++)
        {
            zdanie = b*b*b+20*b;
            teza = 3*(b*b)+370;
            if(zdanie >= teza)
                printf("Liczba %u nie spelnia nierownosci\n", b);
        }
    }
    
    ////////////// Cwiczenie 6.5 ////////////////////

    printf("\n\n\tCwiczenie 6.5a\n");
    double lewa, prawa;
    int y;
    lewa = 1;

    for(int n = 1; ; n++)
    {
        lewa *= 1.02;
        y = n;
        y *= y;
        prawa = 1000*y;
        if(lewa > prawa)
        {
            printf("\nNajmniejsza liczba naturalna spelniajaca warunek to: %d", n-1);
            break;
        }
    }

    printf("\n\n\tCwiczenie 6.5b\n");
    int z;
    double nierownosc = 0;
    double suma_nierownosci = 0;

    do {
        printf("\nPodaj liczbe x: ");
        scanf("%d", &z);
    } while (z <= 0);

    fflush(stdin);
    for(int n = 1; ; n++)
    {
        nierownosc = 1.0/n;
        suma_nierownosci += nierownosc;
        if(suma_nierownosci > z)
        {
            printf("Najmniejsza liczba naturalna spelniajaca nierownosc to %d", n-1);
            break;
        }
    }

    ///////////////////////////////////////////////

    printf("\n");
    system("pause");
    return 0;
}
