#include <stdio.h>
int dgt(int x)
{
    int a,b=0;
    a=x;
    while(a)
    {
        a/=10;
        b++;
    }
    return b;
}
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    while(scanf("%d%d" ,&a, &b)!=EOF)
    {
        for(c=a,e=0; c<=b; c++)
        {
            d=dgt(c);
            if(d==1) e++;
            else if(d==2)
            {
                f=c%10;
                k=c/10;
                g=k%10;
                if(f!=g) e++;
            }
            else if(d==3)
            {
                f=c%10;
                k=c/10;
                g=k%10;
                l=k/10;
                h=l%10;
                if(f!=g && f!=h &&g!=h) e++;
            }
            else if(d==4)
            {
                f=c%10;
                k=c/10;
                g=k%10;
                l=k/10;
                h=l%10;
                j=l/10;
                i=j%10;
                if(f!=g && f!=h && f!=i && g!=h && g!=i && h!=i) e++;
            }
        }
        printf("%d\n",e);
    }
    return 0;
}
