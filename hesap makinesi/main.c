#include <stdio.h>
#include <stdlib.h>

int main()
{
   char islem;
   float sayi1,sayi2,sonuc;
   printf("YAPILACAK ISLEM(+,-,*,/): ");
   scanf("%c",&islem);

   switch(islem){
        case '-':
        printf("IKI SAYI GIRINIZ:\n");
        scanf("%f",&sayi1);
        scanf("%f",&sayi2);
        sonuc=sayi1-sayi2;
        printf("%f-%f=%f",sayi1,sayi2,sonuc);
        break;

        case '+':
        printf("IKI SAYI GIRINIZ:\n");
        scanf("%f",&sayi1);
        scanf("%f",&sayi2);
        sonuc=sayi1+sayi2;
        printf("%f+%f=%f",sayi1,sayi2,sonuc);
        break;

        case '*':
        printf("IKI SAYI GIRINIZ:\n");
        scanf("%f",&sayi1);
        scanf("%f",&sayi2);
        sonuc=sayi1*sayi2;
        printf("%f*%f=%f",sayi1,sayi2,sonuc);
        break;

        case '/':
        printf("IKI SAYI GIRINIZ:\n");
        scanf("%f",&sayi1);
        scanf("%f",&sayi2);
        sonuc=sayi1/sayi2;
        printf("%f/%f=%f",sayi1,sayi2,sonuc);
        break;

        default:
        printf("Gecersiz bir islem girdiniz!");
   }
    return 0;
}
