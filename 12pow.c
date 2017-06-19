/*
 * =====================================================================================
 *
 *       Filename:  12pow.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年05月31日 19时41分30秒
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
void check(float,float);
int main(){
    int b=4;
    for(int i=0;i<10;i++){
    printf("%d ",i);
    check(b*pow(10,i),b*pow(10,i));
    }
}
void check(float a,float c){
    printf("%d is a\n",(int)(a*10.00));
    printf("%d is c\n",(int)c);
}

