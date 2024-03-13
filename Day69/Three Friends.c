#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int num1,num2,num3;
        scanf("%d %d %d",&num1,&num2,&num3);
        if(num1+num2==num3 || num1+num3==num2||num2+num3==num1){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }
    return 0;
}

