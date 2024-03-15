#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int length;
        scanf("%d",&length);
        char str1[length+1];
        char str2[length+1];
        scanf("%s %s",str1,str2);
        int one_count1=0,one_count2=0;
        for(int i=0;str1[i]!='\0';i++){
            if(str1[i]=='1') one_count1++;
        }
        for(int i=0;str2[i]!='\0';i++){
            if(str2[i]=='1') one_count2++;
        }
        if(one_count1==one_count2) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

