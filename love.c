/*
 * =====================================================================================
 *
 *       Filename:  love.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月19日 01时24分09秒
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
#define N 1000000007
int dp[10005][6];
int getstr(char str[]){
    int len=strlen(str);
    memset(dp,0,sizeof(dp));
    if(str[0]=='L')dp[0][0]=1;
    for(int i=1;i<len;i++){
	dp[i][0]=dp[i-1][0];
	dp[i][1]=dp[i-1][1];
	dp[i][2]=dp[i-1][2];
	dp[i][3]=dp[i-1][3];
	if(str[i]=='L'){
	    dp[i][0]=(dp[i][0]+1)%N;
	}else if(str[i]=='O'){
	    dp[i][1]=(dp[i][1]+dp[i-1][0])%N;
	}else if(str[i]=='V'){
	    dp[i][2]=(dp[i][2]+dp[i-1][1])%N;
	}else if(str[i]=='E'){
	    dp[i][3]=(dp[i][3]+dp[i-1][2])%N;
	}



    }
    return dp[len-1][3];
}
int main(){
    freopen("data.in","r",stdin);
    int T;
    scanf("%d",&T);
    getchar();
    char m[10002];
    while(T--){
	scanf("%s",m);
	printf("%d\n",getstr(m));
    }

}

