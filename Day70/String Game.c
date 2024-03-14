#include <stdio.h>
#include<stdbool.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int length;
        scanf("%d",&length);
        char str[length+1];
        scanf("%s",str);
        int count[26]={0};
        bool flag=true;
        if(length%2==0){
            for(int i=0;str[i]!=0;i++){
                count[str[i]-'a']++;
            }
            for(int i=0;i<26;i++){
                if(count[i]%2!=0){
                    flag=false;
                    break;
                }
            }
            if(flag==true) printf("yes\n");
            else printf("no\n");
        }else{
            printf("no\n");
        }
    }
    return 0;
}
