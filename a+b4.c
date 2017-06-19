/*
 * =====================================================================================
 *
 *       Filename:  a+b4.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月04日 17时45分47秒
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
int main(){
    int K;
    scanf("%d",	&K);
    int a,b,sum,s;
    for(int i=0;i<K;i++){
	scanf("%d%d",&a,&b);
	sum=a+b;
	s=0;
	for(int j=1;j*j<=sum;j++){
	    if(sum%j==0){
		s+=2;
	    }
	    if(j*j==sum)
		s--;
	}
	printf("%d\n",s);

    }
}

