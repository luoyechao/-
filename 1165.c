/*
 * =====================================================================================
 *
 *       Filename:  1165.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月04日 18时08分14秒
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
#include<string.h>
int cal(int ,int ,char);
int main(){
    char s[100];
    char sums;
    int number[5];
    int num=0;
    while(scanf("%s",s)!=EOF){
	memset(number,0,sizeof(number));
	//int len=strlen(s);
	int step=0;
	for(int i=0;s[i]!='\0';i++){
	    if(s[i]<='9'&&s[i]>='0'){
		//printf("hahahah%d\n",number[step]);
		number[step]=number[step]*10+s[i]-'0';
	    }else{
		if(s[i]=='+' || s[i]=='-')
		    sums=s[i];
		step++;
		if(s[i]=='='&&s[i+1]=='\0'){
		    number[step]=500;
		}
	    }
	}
/*  	for(int i=0;i<3;i++){
	    printf("%d ",number[i]);
	}*/
//	printf("\n");
	if(number[2]==cal(number[0],number[1],sums)){
	    num++;
	}
    }
	printf("%d\n",num);
}
int cal(int a,int b,char s1){
    switch(s1){
	case '+':return a+b;
		 break;
	case '-':return a-b;
		 break;
	default: return 1;
    }
}

