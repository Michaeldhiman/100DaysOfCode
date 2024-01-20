#include <stdio.h>

int main(void) {
    int test_case,cost_per_glass=50,profit,no_of_glasses,
        sugarcane_cost,salt_mint_cost,shop_rent;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++){
        scanf("%d",&no_of_glasses);
        int total_income=cost_per_glass*no_of_glasses;
        sugarcane_cost=(total_income*20)/100;
        salt_mint_cost=(total_income*20)/100;
        shop_rent=(total_income*30)/100;
        profit=total_income-(sugarcane_cost+salt_mint_cost+shop_rent);
        printf("%d\n",profit);
        
    }
}

