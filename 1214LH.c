#include<stdio.h>
#include<string.h>
#include<math.h>
int sum(float,float);
char str[25];
int main()
{
    int k;
    scanf("%d", &k);
    getchar();
    while(k--){
        int i, step=0, Q=0;
        int num[3];
        memset(num,0,sizeof(num));
        gets(str);
        for(i=0;i<strlen(str);i++){
            if(str[i]>='0'&&str[i]<='9'){
                num[step]=(str[i]-'0') + num[step]*10;
            }
            if(str[i]<'0'||str[i]>'9'){
                step++;
            }
        }
        int a=num[0],b=num[1],c=num[2],N;
        for(i=0;i<=9;i++){
            N = sum(a*pow(10,i), b);
            if(N==c){
                printf("%d\n", i);
                Q++;
            }
        }
        if(Q==0){
            for(i=0;i<=9;i++){
                N = sum(b*pow(10,i), a);
                if(N==c){
                    printf("%d\n", -i);
                }
            }
        }

    }
    return 0;
}
float sum(float a, float b)	
{
    return (float)(a+b);
}
