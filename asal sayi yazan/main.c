#include <stdio.h>
#include <stdlib.h>
int main()
{
    for(int i=3;i<50;i++)
        {int bayrak=0;
        for(int j=2;j<i;j++)
           {if(i%j==0)
           {bayrak=1;}
           }

        if(bayrak==0)
        {printf("%d\n",i);}
        }

}
