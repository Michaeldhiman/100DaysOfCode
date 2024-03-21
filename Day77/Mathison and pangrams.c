#include <stdio.h>
#include<string.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int arr1[26];
        for(int i=0;i<26;i++){
            scanf("%d",&arr1[i]);
        }
        char str[50001];
        scanf("%s",str);
        int length=strlen(str);
        int count[26]={0};
        for(int i=0;i<length;i++){
            count[str[i]-'a']++;
        }
        int money_needed=0;
        for(int i=0;i<26;i++){
            if(count[i]==0){
                money_needed+=arr1[i];
            }else{
                money_needed+=0;
            }
        }
        printf("%d\n",money_needed);
    }
    return 0;
}

