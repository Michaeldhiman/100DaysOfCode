#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int stick_length,parts_to_break;
        scanf("%d %d",&stick_length,&parts_to_break);
        if(stick_length%parts_to_break==0) printf("%d\n",0);
        else printf("%d\n",1);
    }
    return 0;
}

