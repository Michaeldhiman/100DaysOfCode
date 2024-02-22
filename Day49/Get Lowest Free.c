#include <stdio.h>

int main() {
    int test_case,priceA,priceB,priceC;
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%d%d%d",&priceA,&priceB,&priceC);
        int low_cost=0;
        if(priceA<=priceB && priceA<=priceC){
            low_cost=priceA;
        }
        else if(priceB<=priceA && priceB<=priceC){
            low_cost=priceB;
        }else{
            low_cost=priceC;
        }
        int total_cost=priceA+priceB+priceC-low_cost;
        printf("%d\n",total_cost);
    }
    return 0;
}

