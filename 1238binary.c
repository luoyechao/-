/*
 * =====================================================================================
 *
 *       Filename:  1238binary.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月19日 00时19分30秒
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
int data[1000003];
int main(){
    data[1]=0,data[2]=1;
    int bin=1;
    int x=1000000007;
    for(int i=3;i<1000003;i++){
	bin=(bin*2)%x;
	data[i-1]=data[i-1]%x;
	data[i-2]=data[i-2]%x;
	data[i]=(data[i-1]+data[i-2]+bin)%x;

    }
    int T,k;
    scanf("%d",&T);
    while(T--){
	scanf("%d",&k);
	printf("%d\n",data[k]);

    }

}

