/*
 * =====================================================================================
 *
 *       Filename:  hash.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月14日 17时22分57秒
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
int num(__int64);
int res(__int64);
int main(){
   __int64 a;
   while(scanf("%I64d",&a)!=EOF){
       __int64 mul=a*a;
       if(mul<10000){
	   printf("%I64d\n",mul);
       }else{
	   int z=num(mul);
	   
	   if(z%2==0){
	       int rem=(z-4)/2;
	       while(rem--){
		   mul=mul/10;
	       }
	       printf("%d\n",res(mul));

	   }else{
	       int rem;
	       rem=(z+1-4)/2;
	       while(rem--){
		   mul=mul/10;
	       }
	       printf("%d\n",res(mul));

	   }
       }

   }
}
int num(__int64 b){
    int number=0;
    while(b){
	b=b/10;
	number++;
    }
    return number;
}
int res(__int64 b){
    int result=0;
    int k=4;
    int mu=1;
    int s;
    while(k--){
	s=b%10;
	b=b/10;
	result=result+mu*s;
	mu=mu*10;
    }
    return result;
}

