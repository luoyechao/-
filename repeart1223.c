/*
 * =====================================================================================
 *
 *       Filename:  repeart1223.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月15日 18时31分56秒
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
int input(int);
int num(int);
int main(){
    int M;
    while(scanf("%d",&M)!=EOF){
	int n=num(M);
	int ele=input(n);
	
	if(ele%M==0){
	    printf("%d\n",ele);
	}else{
	    ele=ele*10+1;
	}

    }
    

}
int num(int number){
    int res=0;
    while(number){
	res++;
	number=number/10;
    }
    return res;
}
int input(int number){
    int s=1;
    while(--number){
	s=s*10+1;
    }
    return s;
}

