/*
 * =====================================================================================
 *
 *       Filename:  1230.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月05日 01时09分34秒
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
    int n,m;
    char name[30]="";
    while(scanf("%d%d",&n,&m)!=EOF){
	getchar();
	scanf("%s",name);
	int l,w;
	l=(n-m)/2;
	w=l+m;
	if(l+w==n){
	    if(name[0]!='D'&&m==0){
		printf("Impossible\n");
	    }
	    else if(name[0]=='A'&&m!=0){
		printf("%d:%d\n",w,l);
	    }else if(name[0]=='B'&&m!=0){
		printf("%d:%d\n",l,w);
	    }else if(name[0]=='D'&&m==0){
		printf("%d:%d\n",l,w);
	    }else{
		printf("Impossible\n");
	    }

	}else{
	    printf("Impossible\n");
	}
    }
}

