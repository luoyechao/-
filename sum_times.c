/*
 * =====================================================================================
 *
 *       Filename:  sum_times.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月03日 01时48分05秒
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
#include<ctype.h>

#include<math.h>
void swap(int &a ,int &b);
int main(){
    int K;
    scanf("%d",&K);
    for(int i=0;i<K;i++){
	int c,d;
	scanf("%d %d",&c,&d);
	int dev=c*c-4*d;
	int k=sqrt(dev);
	
	if(dev<0||k*k!=dev){
	    printf("None\n");
	}else{
	    int x1=(c+k)/2;
	    int x2=(c-k)/2;
	    swap(x1,x2);
	    printf("%d %d\n",x1,c-x1);

	}
    }

}
void swap(int &a,int &b){
    if(a>b){
	int temp=a;
	a=b;
	b=temp;
    }

}

