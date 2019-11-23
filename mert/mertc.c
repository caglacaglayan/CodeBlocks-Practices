#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("bir sayi giriniz: ");
    int A;
    scanf("%d",&A);
    for(int i=2;i<A;i++){
            int bayrak=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                bayrak++;
            }
        }
        if(bayrak==0){
    printf("%d\n",i);
}
    }

}
