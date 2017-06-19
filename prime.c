/*
 * =====================================================================================
 *
 *       Filename:  prime.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月12日 18时55分22秒
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
int data[10];
int flag[10];
void dfs(int);
int main(){
    dfs(0);

}
void dfs(int a){
    if(a==3){
	for(int i=0;i<4;i++){
	    printf("%d ",data[i]);
	}
	printf("\n");
	
    }
    else{
	for(int i=1;i<5;i++){
	    if(flag[i]==0){
		flag[i]=1;
		data[a]=i;
		dfs(a+1);
		flag[i]=0;
	    }
	}
	
    }

}

