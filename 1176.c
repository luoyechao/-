#include<stdio.h>
#include<string.h>
int main(){
    freopen("data.in","r",stdin);
    int T;
    scanf("%d",&T);
    char s[10][30];
    char team[20][30];
    char time[20][30];
    int isAc[100];
    int data;
    while(scanf("%s %s %d ",s[0],s[1],&data)!=EOF){
        
        fgets(s[2],25,stdin);
        if(s[2][0]!='A'|| (isAc[data-1001]==1&&strcmp(s[0],time[data-1001])>0)){
            //printf("%s %s %s\n",s[0],s[1],s[2]);
            continue;
        }
        else{
            //printf("%s %s\n",s[0],s[1]);
            strcpy(time[data-1001],s[0]);
            strcpy(team[data-1001],s[1]);
            isAc[data-1001]=1;
        }

    }
    for(int i=0;i<T;i++){
        if(isAc[i]==1){
            printf("%d %s %s\n",i+1001,time[i],team[i]);
        }else{
            printf("%d\n",i+1001);
        }
    }
    return 0;
}
