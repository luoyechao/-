/*
 * =====================================================================================
 *
 *       Filename:  1178.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月05日 01时25分04秒
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
void swap(int &a,int &b){
    if(a>b){
	int temp=a;
	a=b;
	b=temp;
    }
}
int main(){
    int K;
    scanf("%d",&K);
    for(int i=0;i<K;i++){
	int x11,y11,x12,y12; 
	scanf("%d%d%d%d",&x11,&y11,&x12,&y12);
	int x21,y21,x22,y22; 
	scanf("%d%d%d%d",&x21,&y21,&x22,&y22);
	swap(x11,x12);
	swap(x21,x22);
	swap(y11,y12);
	swap(y21,y22);
	bool flag1=false,flag2=false;
	if(x11>=x21){
	    if(x11<x22){
		flag1=true;
	    }else{
		flag1=false;
	    }
	}else{
	    if(x21<x12){
		flag1=true;
	    }else{
		flag1=false;
	    }
	}
	if(y11>=y21){
	    if(y11<y22){
		flag2=true;
	    }else{
		flag2=false;
	    }
	}else{
	    if(y21<y12){
		flag2=true;
	    }else{
		flag2=false;
	    }

	}
	if(flag1&&flag2){
	    printf("Yes\n");
	}else{
	    printf("No\n");
	}

    }

}

