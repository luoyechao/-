/*
 * =====================================================================================
 *
 *       Filename:  root2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月04日 15时22分13秒
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
    scanf("%d",&K);
    for(int i=0;i<K;i++){
	long long a,b,c;
	scanf("%I64d %I64d %I64d",&a,&b,&c);
	long long sub=a-c*b;
	if(sub==0){
	    if(b==0)printf("1\n");
	    else 
	    printf("%I64d\n",sub);
	}else if(sub>0){
	    if(c==1)printf("None\n");
	    else{
		if(sub%(c-1)==0&&c-1>0){
		    printf("%I64d\n",sub/(c-1));
		}else{
		    printf("None\n");
		}
	    }
	}else{
	    printf("None\n");
		

	}
    }
}

