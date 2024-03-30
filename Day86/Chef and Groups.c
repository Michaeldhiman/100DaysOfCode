#include <stdio.h>
#include<string.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        char str[100001];
        scanf("%s",str);
        int count=0;
        for(int i=0;i<strlen(str);i++){
            if(str[i]=='1' && str[i+1]!='1') count++;
        }
        printf("%d\n",count);
        
    }
    return 0;
}
