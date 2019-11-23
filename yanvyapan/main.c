#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int i,j,k,l;
    printf("sayi gir: ");
    scanf("%d",&a);

    for(i=0;i<=((a/2)-1);i++){
            for(j=0;j<=i;j++){
                 printf("*");
            }
            printf("\n");
    }
    for(k=0;k<=(a/2);k++){
            for(l=(a/2);l>=k;l--){
                printf("*");
            }
            printf("\n");
    }
    return 0;
}
