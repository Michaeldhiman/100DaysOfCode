#include <stdio.h>

int main() {
    int test_case;
    scanf("%d",&test_case);
    while(test_case--){
        int rent_cooler_cost,purchase_cooler_cost;
        scanf("%d %d",&rent_cooler_cost,&purchase_cooler_cost);
        int maximum_months=0;
       if(purchase_cooler_cost%rent_cooler_cost!=0){
           maximum_months=purchase_cooler_cost/rent_cooler_cost;
       }else{
           maximum_months=(purchase_cooler_cost/rent_cooler_cost)-1;
         
       }
        printf("%d\n",maximum_months);
    }
    return 0;
}

