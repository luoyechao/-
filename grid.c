/*
 * =====================================================================================
 *
 *       Filename:  grid.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月18日 22时58分28秒
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
long long data[35][35];
int main(){
    for(int i=0;i<34;i++){
	data[0][i]=1;
	data[i][0]=1;
    }
    for(int i=1;i<34;i++){
	for(int j=1;j<34;j++){
	    data[i][j]=data[i-1][j]+data[i][j-1];
	}
    }
   // for(int i=0;i<10;i++){
//	for(int j=0;j<10;j++){
//	    printf("%15lld ",data[i][j]);
//	}
//	printf("\n");
 //   }
    int a,b;
    while(scanf("%d %d",&a,&b),a||b){
	printf("%I64d\n",data[a][b]);

    }

}

