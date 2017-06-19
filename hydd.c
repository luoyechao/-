#include<stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    while(k--)
    {
        __int64 a,b,c;
        scanf("%I64d%I64d%I64d",&a,&b,&c);
	if(c==1){
        if(a==b&&a==0)
        {
             printf("1\n");
        }else if(a==b&&a!=0)printf ("0\n");
        else 
        {
            printf("None\n");
            continue;
        }}
        else
        {   
	    if(a==b){
		printf("None\n");
		continue;
	    }
            __int64 t1,t2;
            t1=c*b-a;
            t2=1-c;
            if(t1/t2>=0&&t1%t2==0)
                printf("%I64d\n",t1/t2);
            else
                printf("None\n");
        }
    }
}
