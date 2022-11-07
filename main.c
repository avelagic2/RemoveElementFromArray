#include <stdio.h>
#define velicina 100
/* Za duzinu niza se koristi simbolicka konstanta*/
int main()
{
    int niz[velicina];
    int niz_vel = 0; /*Varijabla koja cuva broj unesenih elemenata*/
    /*Unos niza*/
    printf("Unesite niz od maksimalno 100 elemenata (-1 + ENTER za kraj unosa): ");
    do
    {
        scanf("%i", &niz[niz_vel]);
    } while ( niz[niz_vel] != -1 && ++niz_vel < velicina );
    /*Odabir broja*/
    int izbaci;
    printf("Unesite broj koji treba izbaciti: ");
    scanf("%i", &izbaci);
    /*Izbacivanje broja*/
    int i;
    for ( i = 0; i < niz_vel; i++)
    {
        /*Kada se naidje na element koji se podudara sa unesenim brojem,
       ostatak niza se pomijera za jedno mjesto ulijevo, a duzina niza se smanjuje*/
        if ( niz[i] == izbaci )
        {
            int j;
            for ( j = i+1; j < niz_vel; j++)
                niz[j - 1] = niz[j];
            niz_vel-- ;
        }
    }
    /*Ispis niza sa izbacenim elementima*/
    printf("Elementi novog niza su: ");
    for ( i = 0; i < niz_vel; i++)
    {
        if (i == niz_vel - 1)
            printf("%i ", niz[i]);
        else printf("%i, ", niz[i]);
    }
    return 0;
}