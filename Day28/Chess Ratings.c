#include <stdio.h>

int main() {
    int test_case,current_rating,rating_needed;
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%d %d",&current_rating,&rating_needed);
    int minimumgames_needed=0;
        int difference=rating_needed-current_rating;
        minimumgames_needed=difference/8;
        if(difference%8!=0) minimumgames_needed++;
        printf("%d\n",minimumgames_needed);
    }
    return 0;
}

