#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int point_needed,match_remaining;
        scanf("%d %d",&point_needed,&match_remaining);
        int minimum_match=point_needed-match_remaining;
        if(minimum_match<0) minimum_match=0;
        printf("%d\n",minimum_match);
    }
    return 0;
}

