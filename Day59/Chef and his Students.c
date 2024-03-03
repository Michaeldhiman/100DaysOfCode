#include<stdio.h>
#include<string.h>
int main(){
    int test_case;
    scanf("%d",&test_case);
    char str[100001];
    while(test_case--){
    scanf("%s",str);
    int length=strlen(str);
    for(int i=0;i<length;i++){
        if(str[i]=='<') str[i]='>';
        else if(str[i]=='>') str[i]='<';
    }
    int count=0;
    for(int i=0;i<length;i++){
        if(str[i]=='>' && str[i+1]=='<'){
           count++;
        }  
    }
    printf("%d\n",count);
        
       
    }

   
  return 0;
}
