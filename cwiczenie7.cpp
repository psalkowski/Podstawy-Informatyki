#include <stdio.h>
#include <stdlib.h>

#define N 10

int main()
{
    char student[N][3][80];
    int ilosc_studentow = 0;
    char buf[80];
    char imie[] = "Imie";
    char nazwisko[] = "Nazwisko";
    char adres[] = "Adres";

    for(int i = 0; ; i++)
    {
        printf("Podaj imie, nazwisko oraz adres studenta: ");
        fgets(buf, 80, stdin);
        fflush(stdin);

        if(buf[0] == 10) 
            break;

        sscanf(buf, "%12s %12s %16s", student[i][0], student[i][1], student[i][2]);
        ilosc_studentow++;

        if(i == N-1)
            break;
    }

    printf("\n %-12s \t %-12s \t%-16s", imie, nazwisko, adres);

    for(int i = 0; i < ilosc_studentow; i++)
        printf("\n %-12s \t %-12s \t%-16s", student[i][0], student[i][1], student[i][2]);
                             
    getchar();
    return 0;
}       
