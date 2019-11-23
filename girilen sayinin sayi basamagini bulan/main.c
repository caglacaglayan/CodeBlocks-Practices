#include <stdio.h>
#include <stdlib.h>

int main()
{
   int s;

   printf("sayi giriniz:");
   scanf("%f",&s);
   int sayac=1;
   while(s%10){
    s=s*10;
   }
    while(s){
     s=s/10;
     sayac++;
    }

   printf("basamak sayisi: %d",sayac);
    return 0;
}
