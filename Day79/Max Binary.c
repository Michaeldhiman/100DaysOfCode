#include <stdio.h>
#include<string.h>
int main() {
    int test_case;
    scanf("%d\n",&test_case);
    while(test_case--){
        int length,operations;
        scanf("%d %d",&length,&operations);
        char str[length];
        scanf("%s",str);
        int new_length=length+operations;
        char str2[new_length];
        strcpy(str2,str);
        int count=0;
        if(str2[0]!='1'){
            str2[0]='1';
            count++;
        }
        for(int i=length;i<new_length-count;i++){
            str2[i]='0';
        }
        str2[new_length-count]='\0';
        printf("%s\n",str2);
    }
    return 0;
}
