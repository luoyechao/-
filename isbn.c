/*
 * =====================================================================================
 *
 *       Filename:  isbn.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017年06月14日 17时58分34秒
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
int main(){
    char str[13]="";
    int bit=10,sum;
    while((scanf("%s",str)!=EOF)){
	sum=0;bit=10;
	for(int i=0;i<10;i++){
	    if(str[i]=='?'){
		bit=i;
//		printf("bit is %d\n",bit);
	    }else{
		if(str[i]=='X'){
		    sum=10*(10-i)+sum;
		}else
		    sum=(str[i]-'0')*(10-i)+sum;
		
	    }
	}
//	printf("sum is %d\n",sum);
	for(int i=0;i<=10;i++){
	    if(bit<9){
		if(i==10){
		    break;
		}
		if((sum+i*(10-bit))%11==0){
		    str[bit]='0'+i;
		}

	    }else{
		if((sum+i*(10-bit))%11==0){
		    if(i==10){
			str[bit]='X';
		    }else{
			str[bit]='0'+i;
		    }

		}
	    }

	}
	printf("%s\n",str);
	

    }
    return 0;


}

