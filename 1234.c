#include<ctype.h>
#include<string>
#include<iostream>
#include<set>
#include<stdio.h>
using namespace std;
int main(){
    char str[34][23]={"auto","break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};
    std::set<string>str1;
    for(int i=0;i<32;i++){
    str1.insert(str[i]);
    }
    //int o=0;
    //for(set<string>::iterator it=str1.begin();it!=str1.end();++it){
//    cout<<o++<<*it<<endl;
 //   }
    int K;
    scanf("%d",&K);
    for(int i=0;i<K;i++){
    string s;
    cin>>s;
    int len=s.length();
    if(!isdigit(s[0])){
        int j=0;
        for( j=0;j<len;j++){
        if(isalpha(s[j])||isdigit(s[j])||s[j]=='_'){
            continue;
        }else{
            printf("No\n");
            break;
        }
        }
        if(j==len){
        int num=str1.count(s);
        if(num>0){
            printf("No\n");
        }else{
            printf("Yes\n");
        }
        }

    }else{
        printf("No\n");
    }
    }
}

