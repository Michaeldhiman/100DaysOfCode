#include <stdio.h>
#include<stdbool.h>
int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int number;
        scanf("%d",&number);
        int d=2;
        bool flag=true;
        if(number==1) printf("no\n");
        else{
            
        while(d<number){
            if(number%d==0){
                flag=false;
                break;
            }
            d++;
        }
        if(flag) printf("yes\n");
        else printf("no\n");
        }
    }
    return 0;
}

