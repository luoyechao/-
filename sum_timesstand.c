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
bool flag=true;
void swap(int &a ,int &b);
int main(){
    int K;
    scanf("%d",&K);
    for(int i=0;i<K;i++){
	int c,d;
	scanf("%d %d",&c,&d);
	__int64_t dev=c*c-4*d;
	__int64_t k;
	
	if(dev>=0){
	    k=sqrt(dev);
	}
	else{
	    printf("None\n");
	    continue;

	}
	flag=true;
	int sqrt1=0;
	for(int j=k-3;j<k+3;j++){
	    if(j*j==dev) {
		flag=false;
		sqrt1=j;
	    }
	    
	}
	if(flag){
	    printf("None\n");
	}else{
	    if((c+sqrt1)%2!=0&&(c-sqrt1)%2!=0){
		printf("None\n");
		continue;
	    }
	    int x2=(c+sqrt1)/2;
	    int x1=(c-sqrt1)/2;
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

