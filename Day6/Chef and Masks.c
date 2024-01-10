#include <stdio.h>

int main(void) {
        int test_case,disposable_masks_cost,cloth_masks_cost;
        scanf("%d",&test_case);
        for(int i=1;i<=test_case;i++){
            scanf("%d %d",&disposable_masks_cost,&cloth_masks_cost);
            int disposable_price=100*disposable_masks_cost;
            int cloth_price=10*cloth_masks_cost;
            if(disposable_price>cloth_price){
                printf("Cloth\n");
            }
            else if(cloth_price>disposable_price){
                printf("Disposable\n");
            }
            else{
                printf("Cloth\n");
            }
            
        }
        
}

