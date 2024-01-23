#include <stdio.h>

int main(void) {
    int test_case,original_number;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
       int reverse_number=0;
       scanf("%d",&original_number);
       while(original_number){
            int digit=original_number%10;
            reverse_number=reverse_number*10+digit;
            original_number=original_number/10;
            }
            printf("%d\n",reverse_number);
    
    }
}


