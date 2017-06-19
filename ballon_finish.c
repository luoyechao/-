/*
 * =====================================================================================
 *
 *       Filename:  ballon_finish.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月05日 18时41分34秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include<string.h>
#include<stdio.h>
int ballon[100005],ballon2[100005],ballon3[100005];
int main(){
    int K;
    scanf("%d",&K);
    for(int i=0;i<K;i++){
	int n,m;
	int cur=0,step=0;
	scanf("%d%d",&n,&m);
	memset(ballon,0,sizeof(ballon));
	memset(ballon2,0,sizeof(ballon2));
	memset(ballon3,0,sizeof(ballon3));
	for(int j=0;j<n;j++){
	    scanf("%d",&ballon[j]);
	}
	for(int j=0;j<m;j++){
	    scanf("%d",&ballon2[j]);
	    while(ballon2[j]>=ballon[cur]&&cur<n){
	//	printf("ballon is %d ballon2 is %d\n",ballon[cur],ballon2[j]);
		if(ballon2[j]==ballon[cur]){
		    ballon3[step]=ballon[cur];
		    step++;
		    cur++;
		    break;
		}
		cur++;
	    }

	}
	printf("%d\n",step);
	for(int j=0;j<step-1;j++){
	    printf("%d ",ballon3[j]);
	}

	printf("%d\n",ballon3[step-1]);
	

    }
}

