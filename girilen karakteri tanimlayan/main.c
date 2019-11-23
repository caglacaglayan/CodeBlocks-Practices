#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Bir karakter giriniz: ");
    char a;
    scanf("%c",&a);

    if(a<='9' && a>='0')
        printf("Rakam");
    else if(a<='?' && a>='!')
        printf("Ozel karakter");
    else
    switch(a){
        case 'A' :
            printf("Sesli harf");
            break;
        case 'E':
            printf("Sesli harf");
            break;
        case 'I':
            printf("Sesli harf");
            break;
        case 'O':
            printf("Sesli harf");
            break;
        case 'U':
            printf("Sesli harf");
            break;
        case 'a':
            printf("Sesli harf");
            break;
        case 'e':
            printf("Sesli harf");
            break;
        case 'i':
            printf("Sesli harf");
            break;
        case 'o':
            printf("Sesli harf");
            break;
        case 'u':
            printf("Sesli harf");
            break;
        default:
            printf("Sessiz harf");
        }

    return 0;
}
