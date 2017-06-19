/*
 * =====================================================================================
 *
 *       Filename:  1214.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年05月31日 05时26分42秒
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
int num[4];
bool flag=true;
int main(){
    int K;
    scanf("%d",&K);
    for(int i=0;i<K;i++){
	flag=true;
	int step=0;
	memset(num,0,sizeof(num));
	char str[1000]="";
	getchar();
	scanf("%s",str);
	for(int j=0;j<strlen(str);j++){
	    if(str[j]>='0' &&str[j]<='9'){
		num[step]=str[j]-'0'+num[step]*10;
	    }else{
		step++;
	    }
	}
	int data=1;
	while(flag){
	for(int s=0;s<10;s++){
	    if(num[0]*data+num[1]==num[2]){
		printf("%d\n",s);
		flag=false;
		break;
	    }
	    data=data*10;
	}
	if(!flag)break;
	data=1;
	for(int s=0;s<10;s++){
	    if(num[0]+num[1]*data==num[2]){
		printf("%d\n",-s);
		flag=false;
		break;
	    }
	    data=data*10;
	    
	}
	}

    }
}

