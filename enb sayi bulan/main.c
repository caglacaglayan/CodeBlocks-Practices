#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,E;
    printf("3 SAYI GIRINIZ:\n");
    scanf("%f%f%f",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
            E=a;
        else
            E=c;

    }
    else
    {
        if(b>c)
            E=b;
        else
            E=c;

    }

    printf("EN BUYUK SAYI: %f",E);






    return 0;
}
