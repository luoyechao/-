/*
 * =====================================================================================
 *
 *       Filename:  tourist1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月17日 02时59分42秒
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
#include<stdio.h>
int dis[5][5];
int plan[5];
const int Min=0x3f3f3f3f;
int main(){
    freopen("data.in","r",stdin);
    int s[6][6]={{0,1,2,3,0},
	{0,1,3,2,0},
	{0,2,1,3,0},
	{0,2,3,1,0},
	{0,3,1,2,0},
	{0,3,2,1,0}};
    int T;
    scanf("%d",&T);
    while(T--){
	memset(plan,0,sizeof(plan));
	for(int i=0;i<4;i++){
	    for(int j=0;j<4;j++){
		scanf("%d",&dis[i][j]);
	    }
	}
	int cheap=Min;
	
	for(int i=0;i<6;i++){
	    plan[i]=0;
	    for(int j=0;j<4;j++)
		plan[i]=dis[s[i][j]][s[i][j+1]]+plan[i];
	    if(cheap>plan[i]){
		cheap=plan[i];
	    }
	}
	printf("%d\n",cheap);
	for(int i=0;i<6;i++){
	    if(plan[i]==cheap){
		for(int j=1;j<3;j++){
		    printf("%d ",s[i][j]);
		}
		printf("%d\n",s[i][3]);
	    }
	}

    }

}

