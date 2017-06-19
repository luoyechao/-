/*
 * =====================================================================================
 *
 *       Filename:  1258.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月18日 05时31分04秒
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
int data[11][11];
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
	    for(int j=1;j<=n;j++){
		data[i][j]=i*n+j;
	    }
	}
	for(int i=0;i<m;i++){
	    getchar();
	    char s;int x,y;
            scanf("%c %d %d",&s,&x,&y);
	}
	
	


    }
}
void left(int data[][11],int x,int y,int m){
    int temp;
    for(int j=0;j<y;j++)
	temp=data[x][0];
       for(int i=0;i<m;i++){
           data[x][i]=data[x][i+1];
       }
    data[x][m]=temp;
}
void right(int data[][11],int x,int y,int m){
    int temp;
    for(int j=0;j<y;j++)
	temp=data[x][m];
       for(int i=1;i<=m;i++){
           data[x][i]=data[x][i-1];
       }
    data[x][0]=temp;
}



