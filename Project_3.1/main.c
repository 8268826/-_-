#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s,n,p,r,m;
    printf("Input S,p,n:\n"); scanf("%f%f%f",&s,&p,&n);
    r=p/100;
    m = (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
    printf("m= %g",m);
    return 0;
}
