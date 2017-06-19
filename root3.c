/*
 * =====================================================================================
 *
 *       Filename:  root3.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  2017年06月04日 16时39分12秒
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
	__int64 a,b,c;
	scanf("%I64d %I64d %I64d",&a,&b,&c);
	if(c==1){
	    if(a==b&&a==0){
		printf("1\n");
	    }else if(a==b&&a!=0){
		printf("0\n");
	    }else{
		printf("None\n");
	    }

	}else{
	    if(a==0&&b==0){
		printf("None\n");
		continue;
	    }
	    __int64 t1,t2;
	    t1=c*b-a;
	    t2=1-c;
	    __int64 x1=t1/t2;
	    if(t1/t2>=0&&t1%t2==0){
		printf("%I64d\n",t1/t2);
	    }else{
		printf("None\n");
	    }
	}
    }
}

