/*
 * =====================================================================================
 *
 *       Filename:  2048_2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月16日 17时00分02秒
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
int data1[5][5];
void upDown(int [][5],int);
void swap(int &,int &);
void print(int [][5]);
void move(int [][5],int );
void craw(int [][5],int );
void moveUD(int [][5],int);
int main(){
    freopen("data.in","r",stdin);
    int T;
    scanf("%d",&T);
    char str[10]="";
    while(T--){
	for(int i=0;i<4;i++){
	    for(int j=0;j<4;j++){
		scanf("%d",&data1[i][j]);
	    }
	}
	scanf("%s",str);
	if(str[0]=='L'){
	    craw(data1,0);
	}else if(str[0]=='R'){
	    craw(data1,3);
	}else if(str[0]=='U'){
	    upDown(data1,0);
	}else if(str[0]=='D'){
	    upDown(data1,3);
	}
	print(data1);
	printf("\n");
	
    }
}
void move(int data[][5],int s){
    int row;
    for(int a=0;a<4;a++){
	row=abs(s-0);
	for(int b=0;b<4;b++){
	    int m=a,n=b;
	    int value=abs(s-n);
	    if(data[m][value]==0)continue;
	    else{
		data[m][row]=data[m][value];
		if(row!=value)data[m][value]=0;
		if(s>0)row--;
		else
		row++;
	    }
	}
    }
}
void craw(int data[][5],int s){
    move(data,s);
    for(int a=0;a<4;a++){
	for(int b=0;b<4;b++){
	    int m=a,n=abs(s-b);
	    if(n==0)continue;
	    else{
		if(data[m][n]==data[m][n-1]){
		    if(s>0){
			data[m][n]=data[m][n-1]*2;
			data[m][n-1]=0;
		    }else{
		    data[m][n-1]=data[m][n-1]*2;
		    data[m][n]=0;
		    }
		}
	    }
	}
    }
    move(data,s);
    

}
void print(int data[][5]){
    for(int i=0;i<4;i++){
	for(int j=0;j<3;j++){
	    printf("%d ",data[i][j]);
	}
	printf("%d\n",data[i][3]);
    }
}
void swap(int &q,int &p){
    int temp=p;
    p=q;
    q=temp;
}
void moveUD(int data[][5],int s){
    for(int i=0;i<4;i++){
	int col=abs(s-0);
	for(int j=0;j<4;j++){
	    if(data[abs(s-j)][i]==0){
		continue;
	    }else{
		data[col][i]=data[abs(s-j)][i];
		if(col!=abs(s-j))data[abs(s-j)][i]=0;
		if(s>0)col--;
		else col++;
	    }
	}
    }
}
void upDown(int data[][5],int s){
    moveUD(data,s);

    for(int i=0;i<4;i++){
	for(int j=0;j<4;j++){
	    if(abs(s-j)==0)continue;
	    else{
		if(data[abs(s-j)][i]==data[abs(s-j)-1][i]){
		    if(s>0){
		    data[abs(s-j)][i]=2*data[abs(s-j)-1][i];
		    data[abs(s-j)-1][i]=0;
		    }else{
		    data[abs(s-j)][i]=2*data[abs(s-j)][i];
		    data[abs(s-j)-1][i]=0;

		    }
		}
	    }

	}
    }
    moveUD(data,s);
}


