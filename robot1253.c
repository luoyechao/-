/*
 * =====================================================================================
 *
 *       Filename:  robot1253.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月18日 02时59分30秒
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
int point[1003];
int data[1003];
int load[1003];
int main(){
    freopen("data.in","r",stdin);
    int T;
    while(scanf("%d",&T)!=EOF){
	memset(data,0,sizeof(data));
	int job=0;
	for(int i=0;i<T;i++){
	    scanf("%d",&point[i]);
	}
	int j=0,dir=1;
	int trans=-1;
	while(true){
	    if(job>=point[j]&&data[j]==0){
		data[j]=1;
		load[job]=j;
		job++;
		if(job==T){
	//	    printf("haha\n");
		    break;
		}
	    }
	    if(j==0){
		dir=1;
		trans++;
	    }
	    if(j==T-1){
		dir=-1;
		trans++;
	    }
	    j=j+dir;
	}
	//}
	printf("%d\n",trans);
    }

}

