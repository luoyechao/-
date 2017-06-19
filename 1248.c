/*
 * =====================================================================================
 *
 *       Filename:  1248.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月16日 19时01分21秒
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
#include<set>
#include<string.h>
int data[10],al[3],bo[3];
int data2[10];
int main(){
    int T;
    freopen("data.in","r",stdin);
    scanf("%d",&T);
    while(T--){
	memset(data,0,sizeof(data));
	memset(data2,0,sizeof(data2));
	int sum1=0;
	int score;
	for(int i=0;i<3;i++){
	    scanf("%d",&score);
	    al[i]=score;
	    if(score==1)score=7;
	    data[score]++;
	    sum1+=score; 
	}
	
	int sum2=0;
	for(int i=0;i<3;i++){
	    scanf("%d",&score);
	    bo[i]=score;
	    if(score==1)score=7;
	    data2[score]++;
	    sum2+=score;
	}
	int alice=0,bob=0,tempa,tempb;
	for(int i=2;i<8;i++){
	    if(data[i]>alice){
		alice=data[i];
		tempa=i;
	    }
	    if(data2[i]>bob){
		bob=data2[i];
		tempb=i;
	    }

	}
	int n=bob;
	int m=alice;
	//printf("bob's size: %d alice's size is: %d\n",n,m);
	if(n<m){
	    printf("Alice\n");
	}else if(n>m){
	    printf("Bob\n");
	}else{
	    if(n==1){
		int suma=0,sumb=0;
		for(int i1=0;i1<3;i1++){
		    suma+=al[i1];
		    sumb+=bo[i1];
		}
		if(suma>sumb){
		    printf("Alice\n");
		}else if(suma<sumb){
		    printf("Bob\n");
		}else {
		    printf("Draw\n");
		}
	    }else{
		if(tempa>tempb)printf("Alice\n");
		else if(tempb>tempa)printf("Bob\n");
		else {
		    if(sum1>sum2)printf("Alice\n");
		    else if(sum1<sum2)printf("Bob\n");
		    else{
			printf("Draw\n");
		    }
		}

	    }
	}
    }
}

