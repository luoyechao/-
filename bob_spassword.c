/*
 * ,====================================================================================
 *
 *       Filename:  bob_spassword.c
 *
 *    Description:  这是一个错误的写法
 *
 *        Version:  1.0
 *        Created:  2017年06月14日 19时14分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * ,====================================================================================
 */
#include <stdlib.h>
#include<stdio.h>
#include<string.h>
bool find(int s[][10],int);
int a[10];
int main(){
    int s[10][10]={{0},
                   {1,2,4,5,6,8},
                   {2,1,3,4,5,6,7,9},
                   {3,2,4,5,6,8},
                   {4,1,2,5,7,8},
                   {5,1,2,3,4,5,6,7,8,9},
                   {6,2,3,5,8,9},
                   {7,2,4,5,6,8},
                   {8,1,3,4,5,6,7,9},
                   {9,2,4,5,6,8}};
    int T;
    scanf("%d",&T);
    getchar();
    while(T--){
	memset(a,0,sizeof(a));
//	memset(s,0,sizeof(s));
	char str[12]="";
	fgets(str,12,stdin);
	int len=strlen(str);
	//printf("len is %d\n",len);
	int i,j=1;
	for( i=0;i<len-2;i++){
	    a[str[i]-'0']=1;
	   // printf("str i is %d\n",str[i]-'0');
	    //for(int i1=0;i1<10;i1++){
	//	printf("%d ",a[i1]);
	 //   }
	  //  printf("\n");
	    if(find(s,str[i+1]-'0')){
//		printf("there is %d\n",str[i+1]-'0');
		continue;

	    }else{
//		printf("here is %d\n",str[i+1]-'0');
		printf("No\n");
		j=0;
		break;
	
	    }
	}
	if(j==1){
	    printf("Yes\n");
	}
    
	

    }

}               
bool find(int a1[][10],int k){
    for(int i1=1;i1<10;i1++){
//	printf("%d ",a[i1]);

	if(a[i1]==1){
	 //   printf("int there a i is %d\n",i1);
	  //  printf("int there k i is %d\n",k);
	    for(int j=0;j<10;j++){
	//	printf("%d ",a1[i1][j]);
		if(a1[i1][j]==k){
	//	    printf("\n");
		    return true;
		}
	    }
	 //   printf("\n");
	}

    }
    return false;

}

