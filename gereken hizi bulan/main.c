#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("GIDILECEK MESAFEYI GIRINIZ: \n");
   int mesafe;
   scanf("%d",&mesafe);

   printf("GIDILECEK SUREYI GIRINIZ: \n");
   int sure;
   scanf("%d",&sure);

   printf("GIDILMESI GEREKEN HIZ: \n");
   int hiz;
   hiz=mesafe/sure;
   printf("%d",hiz);





    return 0;
}
