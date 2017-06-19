/*
 * =====================================================================================
 *
 *       Filename:  firstblood.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月14日 01时05分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
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
    int data[100];
    int T;
    scanf("%d",&T);
    int step=0,step2=0;
    getchar();
    while(scanf("%s",s[0])!=EOF){
	getchar();
	scanf("%s",s[1]);
	
	getchar();
	scanf("%d",&s1[step]);
	getchar();
/*  	scanf("%s",s[3]);
	getchar();*/
	fgets(s[3],100,stdin);
	//printf("%s %s %d %s\n",s[0],s[1],s1[step],s[3]);
	if(s[3][0]!='A'){
	    continue;
	}else{
	    if(que.count(s1[step])>0){
		step++;
	//	printf("haha\n");
		continue;
	    }
	 //   printf("%d\n",s1[step]);
	    data[step2]=s1[step];
	    step2++;
	    
	    que[s1[step]]=s[0];
	    que1[s1[step]]=s[1];
	}
	step++;
    }
    
    for(int i=0;i<step2;i++){
	if(que1.count(data[i])>0){
	    cout<<data[i]<<" "<<que[data[i]]<<" "<<que1[data[i]]<<endl;
	}else{
	    cout<<i<<endl;
	}

    }
    for(int i=1001;i<1001+T;i++){
	if(que1.count(i)>0){
	    continue;
	}else{
	    printf("%d\n",i);

	}
    }
}

