/*
 * =====================================================================================
 *
 *       Filename:  permutation.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月17日 03时56分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include<algorithm>
using namespace std;
#include<stdio.h>
int main(){
    int a[4]={1,2,3};
    do{
	for(int i=0;i<4;i++){
	    printf("%d ",a[i]);
    
	}
	printf("\n");
    }while(next_permutation(a,a+3));
}

