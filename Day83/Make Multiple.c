#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int num1,num2;
        scanf("%d %d",&num1,&num2);
        int diff=num2-num1;
        if(diff==0 || num1<=diff) printf("yes\n");
        else printf("no\n");
         }
	return 0;
}

