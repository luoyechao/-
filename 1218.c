/*
 * =====================================================================================
 *
 *       Filename:  1218.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月05日 00时37分20秒
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
	int a,b;
	scanf("%d%d",&a,&b);
	int n=a+b;
	int k=1;
	bool flag=false;
	for(int j=2;j*j<=n;j++){
	    if(n%j==0){
		int step=1;
		while(n%j==0){
		    step++;
		    n=n/j;
		}
		k=k*step;
	    }
	    if(n==1){
		flag=true;
		break;
	    }

	}
	if(flag)
	    printf("%d\n",k);
	else{
	    printf("%d\n",2*k);
	}
    }
}

