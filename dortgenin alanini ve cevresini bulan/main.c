#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("DIKDORTGENIN A KENAR UZUNLUGUNU GIRINIZ(cm): \n");
    int a;
    scanf("%d",&a);

    printf("DIKDORTGENIN B KENAR UZUNLUGUUNU GIRINIZ(cm): \n");
    int b;
    scanf("%d",&b);

    int ALAN;
    ALAN=a*b;
    int CEVRE;
    CEVRE=2*(a+b);

    printf("DIKDORTGENIN ALANI: \n%d cm^2\n",ALAN);
    printf("DIKDORTGENIN CEVRESI: \n%d cm\n",CEVRE);



    return 0;
}
