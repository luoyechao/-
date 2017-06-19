/*
 * =====================================================================================
 *
 *       Filename:  ballon.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月03日 03时25分09秒
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
#include<vector>
#include<set>
std::set<int>ballon;
std::vector<int>prin;
int main(){
    int K;
    scanf("%d",&K);
    for(int i=0;i<K;i++){
	int N,M;
	prin.clear();
	ballon.clear();
	scanf("%d %d",&N,&M);
	int ball;
	for(int j=0;j<N;j++){
	    scanf("%d",&ball);
	    ballon.insert(ball);
	}
	for(int j=0;j<M;j++){
	    scanf("%d",&ball);
	    if(ballon.count(ball)>0){
		prin.push_back(ball);
	    }
	}
	printf("%ld\n",prin.size());
	int len=prin.size();
	for(int j=0;j<len-1;j++){
	    printf("%d ",prin[j]);
	}
	printf("%d\n",prin[len-1]);


    }

}

