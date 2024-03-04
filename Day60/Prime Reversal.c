#include <stdio.h>

int main() {
        int test_Case;
        scanf("%d",&test_Case);
        while(test_Case--){
            int length;
            scanf("%d",&length);
            char str1[length];
            char str2[length];
            scanf("%s %s",str1,str2);
            int one_count1=0;
            int one_count2=0;
            for(int i=0;i<length;i++){
                if(str1[i]=='1') one_count1++;
                if(str2[i]=='1') one_count2++;
            }
            if(one_count1==one_count2){
                printf("yes\n");
            }else{
                printf("no\n");
            }
        }
        return 0;
}


