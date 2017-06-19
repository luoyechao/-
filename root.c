/*
 * =====================================================================================
 *
 *       Filename:  root.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月04日 06时13分33秒
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
    long long a,b,c;
    int K;
    scanf("%d",&K);
    for(int i=0;i<K;i++){
	scanf("%I64d%I64d%I64d",&a,&b,&c);
	if(a-b*c==0){
	    printf("%d\n",0);
	}else if(c>1){
	    if((a-b*c)/(c-1)<0){
		printf("None\n");
	    }else{
	//	long long x=(a-b*c)/(c-1);
		if((a-b*c)%(c-1)==0)
		    printf("%I64d\n",(a-b*c)/(c-1));
		else{
		    printf("None\n");
		}

	    }
	}else if(c<=1){
	    printf("None\n");
	}
    }
}

