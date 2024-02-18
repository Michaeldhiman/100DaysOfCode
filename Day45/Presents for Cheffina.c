#include <stdio.h>

int main(){
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int total_gifts;
        scanf("%d",&total_gifts);
        int free_gift=total_gifts/5;
        int minimum_coins_needed=(total_gifts*1)-free_gift;
        printf("%d\n",minimum_coins_needed);
    }
    return 0;
}

