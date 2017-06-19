/*
 * =====================================================================================
 *
 *       Filename:  ballonMap.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月03日 03时48分07秒
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
#include<map>
#include<vector>
#include<string.h>
std::map<int,int>ballon;
std::vector<int>ballon1;
int a1[100005];
int main(){
    int K,step;
    scanf("%d",&K);
    for(int i=0;i<K;i++){
	memset(a1,0,sizeof(a1));
	step=0;
//	ballon1.clear();
//	ballon.clear();
	int n,m,ball;
	scanf("%d %d",&n,&m);
	for(int j=0;j<n;j++){
	    scanf("%d",&ball);
//	    ballon[ball]++;
	}
	for(int j=0;j<m;j++){
	    scanf("%d",&ball);
//	    ballon[ball]++;
	//    if(ballon[ball]>1){//ballon1.push_back(ball);
	//	a1[step]=ball;
	//	step++;
	 //   }
	}
//	int len=step-1;
//	for(int j=0;j<len;j++){
//	    printf("%d ",a1[j]);
//	}
	printf("%d\n",0);
    }
}

