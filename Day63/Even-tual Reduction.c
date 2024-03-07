#include <stdio.h>
#include<stdbool.h>
#include<string.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int length;
        scanf("%d",&length);
        char str[length];
        scanf("%s",str);
        int len=strlen(str);
        bool flag=false;
        for(int i=0;i<len;i++){
            int count=0;
            for(int j=0;j<len;j++){
                if(str[i]==str[j]){
                    count++;
                }
            }
            if(count%2==0){
                flag=true;
            }else if(count%2!=0){
                flag=false;
                break;
            }
           
        }
        if(flag==true) printf("YES\n");
        else printf("NO\n");
      
    }
    return 0;
}

