/*
 * =====================================================================================
 *
 *       Filename:  deletesqrt.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月03日 02时08分53秒
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
#include<math.h>
int main(){
    int a;
    
    while(scanf("%d",&a)!=EOF){
	int k1=a*a;
	printf("%d\n",k1);
	scanf("%d",&k1);
	int k=sqrt(k1);
	printf("the sqrt is :%d\n",k);
    }
}

