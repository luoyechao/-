/*
 * =====================================================================================
 *
 *       Filename:  phone.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月04日 18时03分17秒
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
    char s[12];
    for(int i=0;i<K;i++){
	scanf("%s",s);
	for(int j=0;j<11;j++){
	    if(j>=3&&j<=6){
		s[j]='*';
	    }
	}
	printf("%s\n",s);
    }
}

