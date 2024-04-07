#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int normal_cost,premium_cost,total_needed,money;
        scanf("%d %d %d %d",&normal_cost,&premium_cost,&total_needed,&money);
        if(normal_cost*total_needed>money){
            printf("%d\n",-1);
        }else{
            int normal=0;
            int premium=total_needed-normal;
            int total_buy=normal*normal_cost+premium*premium_cost;
            while(total_buy>money){
                normal++;
                premium--;
                total_buy=normal*normal_cost+premium*premium_cost;
            }
            printf("%d %d\n",normal,premium);
        }
    }
    return 0;
}

