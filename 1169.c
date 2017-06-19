/*
 * =====================================================================================
 *
 *       Filename:  1169.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月12日 18时38分34秒
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
int Sum[100005];
int a[100005];
int main(){
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF&&(n||m)){
    memset(Sum,0,sizeof(Sum));
    memset(a,0,sizeof(a));
    int max1=-1;
    
    for(int i=0;i<m;i++){
	scanf("%d",&a[i]);
	Sum[0]+=a[i];
    }
    max1=Sum[0];
    int step=1;
    for(int i=m;i<n;i++){
	scanf("%d",&a[i]);
	Sum[step]=Sum[step-1]+a[i]-a[step-1];
	if(Sum[step]>max1){
	    max1=Sum[step];
	}
	step++;
    }
    printf("%d\n",max1);


    }

}

