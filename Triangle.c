/*
 * =====================================================================================
 *
 *       Filename:  Triangle.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月15日 17时34分25秒
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
    int T;
    scanf("%d",&T);
    while(T--){
	long long a,b;
	scanf("%lld %lld",&a,&b);
	long long x=a*(a-1);
	long long y=x/2;
	printf("%lld\n",y+b);

    }
    return 0;
}

