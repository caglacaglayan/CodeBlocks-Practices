#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,sayi;
    printf("sayi gir it: ");
    scanf("%d",&sayi);
    for(i=0;i<=sayi;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
