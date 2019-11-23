#include <stdio.h>
#include <stdlib.h>

int main()
{

    float N;
    printf("Righter olcusunu giriniz: ");
    scanf("%f",&N);

    if(N<5.0)
        printf("Ufak veya hasarsiz.");
    else if(5.0<=N&&N<5.5)
        printf("Az hasarli.");
    else if(5.5<=N&&N<6.5)
        printf("Ciddi hasarli.");
    else if(6.5<=N&&N<7.5)
        printf("Felaket: Evler ve binalar cokebilir.");
    else if(7.5<=N)
        printf("Facia: Butun yapilar yok olur.");









    return 0;
}
