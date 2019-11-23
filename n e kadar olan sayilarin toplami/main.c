#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,toplam=0;
    printf("Sayi giriniz(n): ");
    scanf("%d",&n);

    while(n>=0){
          toplam=toplam+n;
          n--;
    }
    printf("toplam: %d",toplam);
    return 0;
}
