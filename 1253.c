/*
 * =====================================================================================
 *
 *       Filename:  1253.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月19日 05时25分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
int data[1003],data1[1000];
int main(){
    freopen("data.in","r",stdin);
    int T;
    while(  scanf("%d",&T)!=EOF){
    for(int i=0;i<T;i++){
	scanf("%d",&data[i]);
    }
    memset(data1,0,sizeof(data1));
    int step=0;
    int ans=-1;
    int lead=0;
    int job=0;
    while(true){
	if(step==0) { lead=1;  ans++;
	}
	if(step==T-1){ 
	    lead=-1;
	    ans++;
	}
	if(data1[step]==0&&job>=data[step]){
	    data1[step]=1;
	    job++;
	    if(job==T){
		if(step==0 || step==T-1)ans--;
		break;
	    };
	}

	step=step+lead;
    }
    printf("%d\n",ans);
    }

}

