/*
 * =====================================================================================
 *
 *       Filename:  Matrix.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月05日 19时16分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include<string.h>
#include<stdio.h>
int data[1005][1005];
int main(){
    int T;
    scanf("%d",&T);
    int N,M,K;
    int c,r,d;
    for(int i=0;i<T;i++){
	memset(data,0,sizeof(data));
	scanf("%d%d%d",&N,&M,&K);
	for(int j=0;j<K;j++){
	    scanf("%d%d%d",&r,&c,&d);
	    data[c][r]=d;
	}
	for(int x=0;x<M;x++){
	    for(int y=0;y<N;y++){
		if(data[x][y]!=0){
		    printf("%d %d %d\n",x,y,data[x][y]);
		}
	    }
	}
	printf("\n");
    }
    

}

