#include <stdio.h>

int main(){
    int test_case,n;
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%d",&n);
        char string[n+1];
        scanf("%s",string);
        int  minimum_opration=0;
        for(int i=0;string[i]!='\0';i++){
           if(string[i]==string[i+1]){
               minimum_opration++;
           }
        }
        printf("%d\n",minimum_opration);
    }
    return 0;
}

