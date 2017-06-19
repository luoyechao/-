/*
 * =====================================================================================
 *
 *       Filename:  coins.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月18日 23时18分41秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include<stdio.h>
long long  data[45],data1[10005];
long long data3[10005];
int main(){
    //data[1]=0;data[2]=1;
    data1[1]=0;data1[2]=1;
    data3[1]=2;data3[2]=3;
    long long bin=4;
    for(int i=3;i<41;i++){
	bin=bin*2;
	
//	data[i]=data[i-1]+bin/4;
	data3[i]=data3[i-1]+data3[i-2];
	
	data1[i]=bin-data3[i];

    }
    int k;
    while(scanf("%d",&k),k){
	printf("%lld,%lld\n",data3[k],data1[k]);
    }
}

