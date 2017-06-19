/*
 * =====================================================================================
 *
 *       Filename:  1268.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月13日 23时58分24秒
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
int main(){
    freopen("data.in","r",stdin);
    int T;
    scanf("%d",&T);
    int data[101][101];
    int dataM[5][101];
    int prindata[101][4],step=0;
    for(int i=0;i<T;i++){
	step=0;
	memset(data,0,sizeof(data));
	memset(dataM,0,sizeof(dataM));
	memset(prindata,0,sizeof(prindata));
	int n,m;
	int Max=-3,Min=10001;
	scanf("%d%d",&n,&m);
	for(int i1=0;i1<n;i1++){
	    Max=-3;Min=10001;
	    for(int j=0;j<m;j++){
		scanf("%d",&data[i1][j]);
		if(Max<data[i1][j]){
		    Max=data[i1][j];
		}
		if(Min>data[i1][j]){
		    Min=data[i1][j];
		}
	    }
	    dataM[0][i1]=Max;
	    dataM[2][i1]=Min;
	}
	
	for(int i1=0;i1<m;i1++){
	    Min=10001;Max=-3;
	    for(int j=0;j<n;j++){
		if(Min>data[j][i1]){
		    Min=data[j][i1];
		}
		if(Max<data[j][i1]){
		    Max=data[j][i1];
		}
	    }
	    dataM[1][i1]=Min;
	    dataM[3][i1]=Max;
	}
	for(int i1=0;i1<n;i1++){
	    for(int i2=0;i2<m;i2++){
		if((data[i1][i2]==dataM[0][i1]&&data[i1][i2]==dataM[1][i2])||(data[i1][i2]==dataM[2][i1]&&data[i1][i2]==dataM[3][i2])){
		    prindata[step][0]=i1;
		    prindata[step][1]=i2;
		    prindata[step][2]=data[i1][i2];
		    step++;
		    
		}
	    }
	}
	if(step==0){
	    printf("None\n");
	}else{
	    printf("%d\n",step);
	    for(int i1=0;i1<step;i1++){
		printf("%d %d %d\n",prindata[i1][0],prindata[i1][1],prindata[i1][2]);
	    }

	}
    }
}

