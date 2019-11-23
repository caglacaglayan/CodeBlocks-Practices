#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("deklemin a`sini giriniz: ");
    int a;
    scanf("%d",&a);

    printf("denklemin b`sini giriniz: ");
    int b;
    scanf("%d",&b);

    printf("denklemin c`sini giriniz: ");
    int c;
    scanf("%d",&c);

    int A;
    A=(b*b)-(4*a*c);

    printf("DELTA=%d\n",A);

    if(A>0)
    printf("DENKELIN IKI REEL KOKU VARDIR!");
    else if(A==0)
    printf("DENKLEMIN BIR REEL KOKU VARDIR!");
    else
    printf("DENKLEMIN REEL KOKU BULUNMAMAKTADIR!");


    return 0;
}
