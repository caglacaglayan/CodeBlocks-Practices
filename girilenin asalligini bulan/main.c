#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Lutfen bir sayi giriniz: ");
    int sayi;
    int bayrak=0;
    scanf("%d",&sayi);
    for(int i=2;i<sayi;i++){
        if(sayi%i==0)
        bayrak++;
    }
    if(bayrak==0)
    printf("asal sayi");
    else
    printf("asal degil");

    return 0;
}
