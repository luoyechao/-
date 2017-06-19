/*
 * =====================================================================================
 *
 *       Filename:  robot.c
 *
 *    Description:  robot.c
 *
 *        Version:  1.0
 *        Created:  2017年06月13日 18时17分15秒
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
#include<algorithm>

struct point{
    int x,y;
    int flagx,flagy;
}robot;
void left(point &);
void right(point &);
void back(point &);
void forward(point &,int);
int main(){
    int T;
    freopen("data.in","r",stdin);
    scanf("%d",&T);
    for(int i=0;i<T;i++){
	robot.x=0;
	robot.y=0;
	robot.flagx=0;
	robot.flagy=1;
	int N,step;
	scanf("%d",&N);
	for(int j=0;j<N;j++){
	    char ins[15];
	    scanf("%s",ins);
	    if(ins[0]=='F'){
		scanf("%d",&step);
		forward(robot,step);
		
	    }
	    else if(ins[0]=='L'){
		left(robot);
		//printf("robot.flagx is %d robot.flagy is %d\n",robot.flagx,robot.flagy);

	    }else if(ins[0]=='R'){
		right(robot);
	    }else if(ins[0]=='B'){
		back(robot);
	    }

	}
	printf("%d %d\n",robot.x,robot.y);
    }
    return 0;
}
void left(point &m){
    if(m.flagx!=0){
	int temp=m.flagx;
	m.flagx=m.flagy;
	m.flagy=temp;
//	printf("haha\n");
    }
    else{
	int temp=m.flagy;
	m.flagy=m.flagx;
	m.flagx=-temp;
    }
   // printf("toward to the %d %d\n",m.flagx,m.flagy);
}
void right(point &m){
    if(m.flagx!=0){
	int temp=m.flagx;
	m.flagx=m.flagy;
	m.flagy=-temp;
    }else{
	int temp=m.flagx;
	m.flagx=m.flagy;
	m.flagy=temp;
    }
 //   printf("toward to the %d %d\n",m.flagx,m.flagy);
}
void back(point &m){
    m.flagx=-m.flagx;
    m.flagy=-m.flagy;
  //  printf("toward to the %d %d\n",m.flagx,m.flagy);
}
void forward(point &m,int k){
    m.x=m.flagx*k+m.x;
    m.y=m.flagy*k+m.y;

}

