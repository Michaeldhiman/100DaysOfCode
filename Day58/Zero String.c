#include <stdio.h>

int main(){
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int length;
        scanf("%d",&length);
        char str[length+1];
        scanf("%s",str);
        int one_count=0,zero_count=0;
        str[length]='\0';
        for(int i=0;i<length;i++){
            if(str[i]=='1') one_count++;
            else zero_count++;
        }
        if(one_count>zero_count){
            printf("%d\n",zero_count+1);
        }
        else if(zero_count){
            printf("%d\n",one_count);
        }
        else{
            printf("%d\n",1);
        }
    }
    return 0;
} 


