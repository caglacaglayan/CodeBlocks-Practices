#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("ucgenin taban uzunlugunu giriniz:");
int a;
scanf("%d",&a);

printf("ucgenin yuksekligini girin:");
int b;
scanf("%d",&b);

int c;
c=(a*b)/2;
printf("alan: ");
printf("(%d*%d)/2=%d",a,b,c);


    return 0;
}
