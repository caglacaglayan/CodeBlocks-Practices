#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bir sayi giriniz (n! hesaplanacaktir.) : ");
    int sayi;
    int sayac=1;
    int carpim=1;
    scanf("%d",&sayi);

    while(sayac<=sayi){
        carpim=carpim*sayac;
        sayac=sayac+1;
    }
    printf("%d!=%d",sayi,carpim);
    return 0;
}
