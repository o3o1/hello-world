#include <stdio.h>
#define N 10000
long a=N,b=0,c=N,d,e,f[N+1],g;
void main()
{
    for(; b != c; f[b++] = a/5);
    for(; d=0,g=c*2,c>N/2; c--,printf("%.4d ",e+d/a),e=d%a)
        for(b=c; d+=f[b]*a,f[b]=d%--g,d/=g--,--b; d*=b);
}