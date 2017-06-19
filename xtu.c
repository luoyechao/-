/*
 * =====================================================================================
 *
 *       Filename:  xtu.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月03日 03时06分55秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include<stdio.h>
#include <stdlib.h>
#include<map>
#include<string.h>
int main(){
    std::map<char,int>count;
    int k;
    scanf("%d",&k);
    char str[1005]="";
    for(int i=0;i<k;i++){
	getchar();
	scanf("%s",str);
//	count['X']=0;
//	count['T']=0;
//	count['U']=0;
	count.clear();
	int len=strlen(str);
	for(int j=0;j<len;j++){
	    if(str[j]=='X' || str[j]=='T' || str[j]=='U'){
		count[str[j]]++;
	    }
	}
	int a[3]={count['X'],count['T'],count['U']};
	int min=10004;
	for(int s=0;s<3;s++){
	    if(a[s]<min){
		min=a[s];
	    }

	}
	
	printf("%d\n",min);
	//printf("%d %d %d\n",count['X'],count['T'],count['U']);
    }

}

