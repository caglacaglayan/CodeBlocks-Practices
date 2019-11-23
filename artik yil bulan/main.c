#include <stdio.h>
#include <stdlib.h>

int main()
{
 printf("BIR YIL GIRINIZ:\n");
 int sayi;
 scanf("%d",&sayi);

 if(sayi%4==0 && sayi%100!=0 || sayi%400==0)
 printf("ARTIK YIL");
 else
 printf("ARTIK YIL DEGIL");

    return 0;
}
