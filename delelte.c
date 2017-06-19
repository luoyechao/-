#include<stdio.h>
#include<math.h>
int prime(unsigned int a);
int main()
{
    unsigned int a;
    while(scanf("%d",&a), a){
        int k;
        k = prime(a);
        if(k==1){
            printf("Yes\n");
        }
        if(k==2){
            printf("No\n");
        }
    }
    return 0;
}
int prime(unsigned int a)
{
    int i,sum=0;
    int n;
    n = floor(sqrt((double)a));
    if(a==1){return 2;}
    if(a>1){
        for(i=2;i<=n;i++){
            if(a%i==0) {sum++;break;}
        }
        if(sum>0)
            return 2;
        else
            return 1;
    }else{
	return 1;

    }

}
