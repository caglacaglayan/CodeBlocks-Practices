#include<stdio.h>
int main(){
int sayi;
printf("kenar girin");
scanf("%d",&sayi);
int kontrol=sayi;
int k,j,m;
for(int i=0;i<sayi;i++){
    if((i+kontrol)==sayi && (i)!=(sayi/2)&&(i<sayi/2)){
    for(j=0;j<i;j++){
        printf(" ");
        }
        printf("*");
    for(k=j;k<kontrol;k++){
            printf(" ");
        }
        printf("*");
        }
    if(i==sayi/2) {
            for(int l=0;l<sayi/2+1;l++){
                printf(" ");
            }
        printf("*");
    }
    if((i+kontrol)==sayi && (i)!=(sayi/2)&& (i>sayi/2)) {
        for(m=0;m<i;m++){
        printf(" ");
        }
        printf("*");

    }
        kontrol--;
        printf("\n");

}
return 0;
}
