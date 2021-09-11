#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s,n,m,r,p;
    printf("Input S,n,m: "); scanf("%f%f%f",&s,&n,&m);
    for(int i=1;i<10000;i++)
    {
        r=i/1000;
        p=r*100;
        float m1=(s*r*pow(1+r,n))/12*(pow(1+r,n)-1);
        if(m1==m)
        {
            printf("p= %f",p);
        }
    }

    return 0;
}
