/*
 * =====================================================================================
 *
 *       Filename:  ASCII.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月13日 16时25分33秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#define LOCAL
#include<stdio.h>
int main(){

    freopen("data.in","r",stdin);
    int i=0;
    int k=0;
    char c;
    while((c=getchar())!=EOF){
	if(i%16==0){
	    if(i!=0)
	    printf("\n");
	    printf("%05X",k);
	    k++;
	}
	printf(" ");
	printf("%02X",c);
	i++;

    } 
}

