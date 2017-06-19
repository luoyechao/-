#include <stdlib.h>
#include<string>
#include<iostream>
using namespace std;
#include<stdio.h>
#include<map>
int main(){
    freopen("data.in","r",stdin);
    std::map<int,string>que;
    std::map<int,string>que1;
    que.clear();
    que1.clear();
    char s[5][100];
    int s1[100];
    int T;
    scanf("%d",&T);
    int step=0;
    getchar();
    while(scanf("%s",s[0])!=EOF){
    getchar();
    scanf("%s",s[1]);
    
    getchar();
    scanf("%d",&s1[step]);
    getchar();
/*      scanf("%s",s[3]);
    getchar();*/
    fgets(s[3],100,stdin);
    printf("%s %s %d %s",s[0],s[1],s1[step],s[3]);
    if(s[3][0]!='A'){
        continue;
    }else{
        if(que.count(s1[step])>0){
        step++;
    //    printf("haha\n");
        continue;
        }
     //   printf("%d\n",s1[step]);
        que[s1[step]]=s[0];
        que1[s1[step]]=s[1];
    }
    step++;
    }
    for(int i=1001;i<1001+T;i++){
    if(que1.count(i)>0){
        cout<<i<<" "<<que[i]<<" "<<que1[i]<<endl;
    }else{
        cout<<i<<endl;
    }

    }
}
