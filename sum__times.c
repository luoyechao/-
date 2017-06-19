/*
 * =====================================================================================
 *
 *       Filename:  sum__times.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月04日 03时34分54秒
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
void swap(long long  &,long long &);
int main(){
    int K;
    scanf("%d",&K);
    for(int i=0;i<K;i++){
	long long c,d,a,b;
	scanf("%lld %lld",&c,&d);
	long long t;
	long long x1;
	long long x2;
	long long n=c*c-4*d;
	t=floor(sqrt(c*c-4*d)+0.5);
	if(n<0||t*t!=n){
	    printf("None\n");
	}else{
	    x1=(c+t)/2;
	    x2=(c-t)/2;
	    swap(x1,x2);
	    a=x1;
	    if(x1<0)
		a=x2;
	    b=c-a;
	   /*   if((c-t)<0&&(c+t)%2!=0){
		printf("None\n");
	    }else{
	    swap(x1,x2);
	    a=x1;
	    b=c-x1;

	    }*/
	    if(a*b==d){
		printf("%lld %lld\n",a,b);
	    }else{
		printf("None\n");
	    }
	}
    }
}
void swap(long long &m,long long &n){
    if(m>n){
	long long temp=m;
	m=n;
	n=temp;
    }
}

