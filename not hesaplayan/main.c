#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d,y;
    printf("DOGRU SAYISINI GIRIN: ");
    scanf("%f",&d);

    printf("YANLIS SAYISINI GIRIN: ");
    scanf("%f",&y);

    float N;
    N=d-(y/4);

    printf("NET SAYINIZ: %f\n",N);

    if(N<10)
    printf("KUR ADI: BEGINNER");
    else if(10<=N&&N<30)
    printf("KUR ADI: ELEMENTARY");
    else if(30<=N&&N<50)
    printf("KUR ADI: PREINTERMEDIATE");
    else if(50<=N)
    printf("KUR ADI: UPPER");


    return 0;
}
