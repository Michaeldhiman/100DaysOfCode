#include <stdio.h>
#include<string.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        char str[1000];
        scanf("%s",str);
        int sum=0;
        int length=strlen(str);
        for(int i=0;i<length;i++){
            int digit=str[i]-'0';
            if(digit>=1 && digit<=9 ) sum+=digit;
        }
        printf("%d\n",sum);
    }
    return 0;
}
