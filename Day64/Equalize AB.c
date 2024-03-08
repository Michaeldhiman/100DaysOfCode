#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int num1,num2,x;
        scanf("%d %d %d",&num1,&num2,&x);
        int diff=num1-num2;
        if(diff<0) diff*=(-1);
        
        if(diff%(2*x)==0) printf("yes\n");
        else printf("no\n");
        
    }
    return 0;
}

