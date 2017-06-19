/*
 * =====================================================================================
 *
 *       Filename:  1246.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月05日 22时16分35秒
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
struct node{
    int x;
    int y;
    int z;
}vec[10005];
bool cmp(struct node a,struct node b){
    return a.x<b.x || (a.x==b.x&&a.y<b.y);

}
int main(){
    int T;
    int n,m,k;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
	scanf("%d%d%d",&n,&m,&k);
	for(int j=0;j<k;j++){
	    scanf("%d%d%d",&vec[j].y,&vec[j].x,&vec[j].z);
	}
	std::sort(vec,vec+k,cmp);

	for(int j=0;j<k;j++){
	    printf("%d %d %d\n",vec[j].x,vec[j].y,vec[j].z);
	}
	printf("\n");
    }

}

