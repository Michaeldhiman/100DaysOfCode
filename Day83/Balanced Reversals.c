#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int length;
        scanf("%d",&length);
        char str[length+1];
        scanf("%s",str);
        int one_count=0;
        int zero_count=0;
        for(int i=0;i<length;i++){
            if(str[i]=='1') one_count++;
            else zero_count++;
        }
        char  str2[length+1];
        for(int i=0;i<zero_count;i++){
            str2[i]='0';
        }
        for(int i=zero_count;i<length;i++){
            str2[i]='1';
        }
        str2[length]='\0';
        printf("%s\n",str2);
    }
    return 0;
}

