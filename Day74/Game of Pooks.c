#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int number;
        scanf("%d",&number);
        if(number==2 || number==3) printf("%d\n",number-1);
        else printf("%d\n",number);
    }
   return 0;
}

