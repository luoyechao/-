/*
 * =====================================================================================
 *
 *       Filename:  candy1187.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月15日 17时54分15秒
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
    long long d;
    while(scanf("%lld",&d)&&d){
	long long num=d/3;
	long long remain=d-num;
	printf("%lld\n",num);
	long long one=remain*num*num;
	long long two=num*(num-1)*(num-2);
	long long none=(remain-1)*num;
	printf("%lld\n",one+two+none);


    }
}

