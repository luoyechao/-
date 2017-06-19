/*
 * =====================================================================================
 *
 *       Filename:  2048.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月16日 16时20分14秒
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
#include<math.h>
int data[5][5];
void left(int [][5],int,int);
void swap(int &,int &);
void print(int [][5]);
int main(){
    freopen("data.in","r",stdin);
    int T;
    scanf("%d",&T);
    char str[20]="";
    while(T--){
	for(int i=0;i<4;i++){
	    for(int j=0;j<4;j++){
		scanf("%d",&data[i][j]);
	    }
	}
	scanf("%s",str);
	left(data,3,1);
	printf("\n");
	print(data);
    }
}
void print(int data[][5]){
    for(int i=0;i<4;i++){
	for(int j=0;j<4;j++){
	    printf("%d ",data[i][j]);
	}
	printf("\n");
    }
}
void left(int data[][5],int s,int flag){
    int row=0;
    for(int a=0;a<4;a++){
	row=abs(s-0);
	for(int b=0;b<4;b++){
	    int value=abs(b-s);
	    if(flag==1){
		swap(a,b);
	    }
	    if(data[a][value]==0){
		continue;
	    }else{
		data[a][row]=data[a][value];
		if(row!=value)
		data[a][value]=0;
		row++;
	    }

	}
    }
    print(data);
    for(int a=0;a<4;a++){
	for(int b=0;b<3;b++){
	    if(flag==1){
		swap(a,b);
	    }
	    int value=abs(b-s);
	    if(data[a][value]==data[a][value+1]){
		data[a][value]=2*data[a][value];
		data[a][value+1]=0;
	    }
	}
    }
}
void swap(int &c,int &d){
    int temp;
    temp=c;
    c=d;
    d=temp;
}
    





