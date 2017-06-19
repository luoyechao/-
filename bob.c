/*
 * =====================================================================================
 *
 *       Filename:  bob.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月15日 16时44分37秒
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
#include<set>
int find(int [][9],int ,int);
std::set<int>str;
#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    int data[10][9]={{0},
	{3,7,9},
	{8},
	{1,7,9},
	{6},
	{0},
	{4},
	{1,3,9},
	{2},
	{1,3,7}
    };
    int data2[10][9]={
	{0},
	{2,4,5},
	{5},
	{2,5,6},
	{5},
	{0},
	{5},
	{4,5,8},
	{5},
	{5,6,8}
    };
    char s[15]="";
    getchar();
    while(T--){
	str.clear();
	bool flag=true;
	fgets(s,15,stdin);
	int len=strlen(s);
	for(int i=0;i<len-2;i++){
	    int x=s[i]-'0';
	    int y=s[i+1]-'0';
	    str.insert(s[i]-'0');
	    int z=find(data,x,y);
	    if(z==10){
	//	printf("x is %d y is %d \n",x,y);
		continue;
	    }else{
	//	printf("x is %d z is %d \n",x,z);
	//	printf("data 8 0 is %d\n",data2[8][0]);
		if(str.count(data2[x][z])>0){
		    continue;
		}else{
		    printf("No\n");
		    flag=false;
		    break;
		}

	    }
	}
	if(flag)printf("Yes\n");
    }
}
int find(int s1[][9],int k,int m){
    for(int i=0;i<3;i++){
	if(s1[k][i]==m){
	    return i;
	}
    }
    return 10;
}

