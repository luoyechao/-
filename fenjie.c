/*
 * =====================================================================================
 *
 *       Filename:  fenjie.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月05日 00时11分16秒
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
    int n;
    scanf("%d",&n);
    
    int k=1;
    int s=0;
    int m=n;
    for(int i=2;i<=n;i++){
	if(n%i==0){
	    s=0;
	    while(n%i==0){
		s++;
		n=n/i;
	    }
	    k=k*(s+1);
	}
	if(n==1)break;
	if(i*i>m){
	    printf("%d\n",2);
	    break;
	}
	
    }
    printf("%d\n",k);
    
}

