#include<stdio.h>
#include<math.h>
int main()
{
    int l;
    scanf("%d",&l);
    while(l--)
    {
        int a,b,s,i,n,k=1;
        scanf("%d%d",&a,&b);
        n=a+b;
	int m=n;
        for(i=2;i*i<=m;i++)
        {
            s=1;
            if(n%i==0)
            {
                while(n%i==0)
                {
                    s++;
                    n/=i;
                }
            }
            k*=s;
            if(n==1) break;
	    if(i*i>m)break;
        }
        if(n!=1) printf("%d\n",2*k);
        else printf("%d\n",k);
    }
}

